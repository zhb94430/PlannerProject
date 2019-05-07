#ifndef PLANNER_H
#define PLANNER_H

#include <string>
#include <functional>

#include "./Libraries/AStar/AStar.h"
#include "./Libraries/AStar/Graph/Node.h"
#include "./pddl/include/pddldriver.hh"
#include "./pddl/include/problem.hh"
#include "./pddl/include/domain.hh"

class Planner {
public:
	PDDLDriver parser;
	AStar astar;

	Planner();
	Planner(std::string domainFilePath, std::string problemFilePath);

	void GenerateGraph();
	void FindBestPath();
};

Planner::Planner(std::string domainFilePath, std::string problemFilePath)
{
	parser.parse(domainFilePath);
	parser.parse(problemFilePath);
}

// Takes the parsed result and generate the graph
void Planner::GenerateGraph()
{
	// What's end condition?

	std::size_t initHash = std::hash<auto>{}(parser.problem._init);
	std::size_t goalHash = std::hash<auto>{}(parser.problem._goal);

	std::size_t currentNodeHash;

	LiteralList* currentNodeState = problem._init;
	
	// Stops when there's one path find
	// Needs to be changed later
	while(currentNode != goalHash)
	{
		// Each node is a literalList hash
		// Each edge is an action
		for (auto const& action : parser.domain._actions) 
		{
			LiteralList* nextNodeState = new LiteralList();

			// Enumerate applicable actions
			if (action._precond.isSatisfiedBy(currentNodeState))
			{
				// Generate nodes from those actions
				nextNodeState = GenerateNodeFrom(action, currentNodeState);

				// Connect those two nodes
				

				// Update the hashes?
			}
			
		}

		

		// Maybe compare those nodes to goal node?
	}
}

void Planner::FindBestPath()
{
	// astar.FindPath();
}

#endif