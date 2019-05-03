cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

project(PlannerProject CXX)

include_directories(pddl/include/)
include_directories(Libraries/AStar/)

add_subdirectory(Tests/)