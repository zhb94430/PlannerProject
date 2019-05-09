#ifndef PLANNER_H
#define PLANNER_H

#include <string>
#include <functional>
#include <stack>
#include <algorithm>

#include <boost/container_hash/hash.hpp>

#include "./Libraries/AStar/AStar.h"
#include "./Libraries/AStar/Graph/Node.h"

#include "./pddl/include/pddldriver.hh"
#include "./pddl/include/problem.hh"
#include "./pddl/include/domain.hh"

class Planner {
public:

	struct PNode
	{
		Node node;
		std::size_t hash;
		LiteralList state;

		PNode(){}
		PNode(LiteralList l)
		{
			boost::hash_combine(hash, l);
			state = l;
			node = Node(hash, 1);
		}
	};

	PDDLDriver parser;
	AStar astar;
	PNode initPNode;
	PNode goalPNode;
	Graph graph;

	Planner();
	Planner(std::string domainFilePath, std::string problemFilePath);

	PNode GeneratePNodeFrom(Action& action, PNode& currentPNode);
	bool ConditionSatisfied(Action& action, PNode& node);
	void GenerateGraph();
	void FindBestPath();
};

Planner::Planner(std::string domainFilePath, std::string problemFilePath)
{
	parser.parse(domainFilePath);
	parser.parse(problemFilePath);

	initPNode = Planner::PNode(*(parser.problem->_init));
	goalPNode = Planner::PNode(*(parser.problem->_goal));
}

Planner::PNode Planner::GeneratePNodeFrom(Action& action, Planner::PNode& currentPNode)
{
	LiteralList resultList = currentPNode.state;

	// Apply action effect to currentPNode state
	// by appending effects and remove duplicates
	resultList.insert(resultList.end(), action._effects->begin(), action._effects->end());
	
	for (auto literal = resultList.begin(); literal != resultList.end(); literal++) 
	{
		// Remove duplicates
		std::remove(literal + 1, resultList.end(), *literal);

		// Find opposite and remove opposite duplicates
		auto literalOpposite = Literal((*literal)->first, !(*literal)->second);
		bool containsOpposite = std::find(resultList.begin(), resultList.end(), literalOpposite) != resultList.end();

		if (containsOpposite)
		{
			std::remove(literal + 1, resultList.end(), &literalOpposite);
			std::replace(literal, literal + 1, *literal, &literalOpposite);
		}

		resultList.erase(literal, resultList.end());
	}

	

	// Return altered currentPNode
	PNode resultNode(resultList);

	// Generate & store edge
	Edge e(&currentPNode.node, &resultNode.node);
	currentPNode.node.paths.push_back(e);

	return resultNode;
}

bool Planner::ConditionSatisfied(Action& action, PNode& node)
{
	// Only copy of pointers, okay in this case because read-only
	LiteralList preconditionCopy = *(action._precond);
	LiteralList stateCopy = node.state;

	std::sort(preconditionCopy.begin(), preconditionCopy.end());
    std::sort(stateCopy.begin(), stateCopy.end());
    bool result = std::includes(preconditionCopy.begin(), preconditionCopy.end(), stateCopy.begin(), stateCopy.end());

	return result;
}

// Takes the parsed result and generate the graph
void Planner::GenerateGraph()
{
	// What's end condition?
	std::stack<PNode*> s;

	graph.nodes.push_back(&(initPNode.node));
	s.push(&initPNode);

	PNode* currentPNode = s.top();
	s.pop();

	// Stops when there's one path find
	// Needs to be changed later
	while(!s.empty())
	{
		// Each node is a literalList hash
		// Each edge is an action
		for (auto action : *(parser.domain->_actions)) 
		{
			PNode nextPNode;

			// Enumerate applicable actions
			if (ConditionSatisfied(*action, *currentPNode))
			{
				// Generate nodes from those actions and store in graph
				nextPNode = GeneratePNodeFrom(*action, *currentPNode);
				
				graph.nodes.push_back(&(nextPNode.node));
				s.push(&nextPNode);
			}			
		}

		//Pop node 		
		currentPNode = s.top();
		s.pop();
	}
}

void Planner::FindBestPath()
{
	astar.FindPath(&initPNode.node, &goalPNode.node);
}

#endif