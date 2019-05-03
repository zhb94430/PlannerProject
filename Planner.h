#ifndef PLANNER_H
#define PLANNER_H

#include <string>

#include "./Libraries/AStar/AStar.h"
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
	
}

void Planner::FindBestPath()
{
	// astar.FindPath();
}

#endif