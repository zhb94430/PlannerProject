#ifndef PLANNER_H
#define PLANNER_H

#include <string>
#include <functional>
#include <stack>

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
		LiteralList* state;

		PNode(LiteralList* l)
		{
			hash = std::hash<auto>{}(l);
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

	PNode GeneratePNodeFrom(Action* action, PNode* currentPNode);
	bool ConditionSatisfied(Action* action, PNode* node);
	void GenerateGraph();
	void FindBestPath();
};

Planner::Planner(std::string domainFilePath, std::string problemFilePath)
{
	parser.parse(domainFilePath);
	parser.parse(problemFilePath);

	initPNode = PNode(parser._init);
	goalPNode = PNode(parser._goal);
}

PNode Planner::GeneratePNodeFrom(Action action, PNode* currentPNode)
{
	LiteralList resultList = currentPNode->state;

	// Apply action effect to currentPNode state
	resultList.append(action->EffectList);
	resultList.removeOppsite();

	// Return altered currentPNode
	PNode resultNode(resultList);

	// Generate & store edge
	Edge e(currentPNode->node, &resultNode.node);
	currentPNode->node.paths.push_back(e);

	return resultNode;
}

bool Planner::ConditionSatisfied(Action* action, PNode* node)
{
	bool result = node->state.contains(action._precond);

	return result;
}

// Takes the parsed result and generate the graph
void Planner::GenerateGraph()
{
	// What's end condition?
	std::stack<PNode*> s;

	graph.nodes.push_back(&(initPNode.node));
	s.push(&initPNode);

	PNode* currentPNode = s.pop();
	// Stops when there's one path find
	// Needs to be changed later
	while(!s.empty())
	{
		// Each node is a literalList hash
		// Each edge is an action
		for (auto const& action : parser.domain._actions) 
		{
			PNode nextPNode;

			// Enumerate applicable actions
			if (action._precond.isSatisfiedBy(currentPNode))
			{
				// Generate nodes from those actions and store in graph
				nextPNode = GeneratePNodeFrom(action, currentPNode);
				
				graph.nodes.push_back(&(nextPNode.node));
				s.push(&nextPNode);
			}			
		}

		//Pop node 		
		currentPNode = s.pop();
	}
}

void Planner::FindBestPath()
{
	astar.FindPath(initPNode.node, goalPNode.node);
}

#endif