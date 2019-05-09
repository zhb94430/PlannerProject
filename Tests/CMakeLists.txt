include_directories(../)
include_directories(../Libraries/boost_1_70_0/)

add_executable(PlannerUnitTest UnitTestMain.cpp ../pddl/src/pddldriver.cc ../pddl/src/action.cc ../pddl/src/domain.cc ../pddl/src/pddllex.yy.cc ../pddl/src/pddlparser.tab.cc ../pddl/src/predicate.cc ../pddl/src/problem.cc catch.hpp)