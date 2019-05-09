#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <stdio.h>
#include <string>

#include <AStar.h>
#include <Graph/Node.h>

#include "../Planner.h"

TEST_CASE("GRIPPER")
{
	std::string domainS = "./gripper.pddl";
	std::string problemS = "./gripper-4.pddl";

	Planner* p = new Planner(domainS, problemS);

	int i = 1;
}