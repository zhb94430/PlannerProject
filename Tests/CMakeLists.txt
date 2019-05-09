include_directories(../)
include_directories(../Libraries/boost_1_70_0/)
include_directories(../Libraries/AStar/)
# include_directories(../Libraries/AStar/Graph/)
include_directories(../pddl/include/)

add_executable(PlannerUnitTest

			   ../pddl/src/pddldriver.cc 
			   ../pddl/src/action.cc 
			   ../pddl/src/domain.cc 
			   ../pddl/src/pddllex.yy.cc 
			   ../pddl/src/pddlparser.tab.cc 
			   ../pddl/src/predicate.cc 
			   ../pddl/src/problem.cc
			   catch.hpp
			   UnitTestMain.cpp)