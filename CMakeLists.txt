cmake_minimum_required(VERSION 3.10)

project(MyCppProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main main.cpp employee.cpp workerManager.cpp boss.cpp manager.cpp)