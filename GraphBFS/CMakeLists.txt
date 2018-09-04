cmake_minimum_required(VERSION 3.12)
project(GraphBFS)

set(CMAKE_CXX_STANDARD 14)

add_executable(GraphBFS main.cpp utils/Graph.cpp utils/Graph.h utils/GraphFileProcess.cpp utils/GraphFileProcess.h)