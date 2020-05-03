# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(RLogLib)

# Add a library to this build. The name of the library is RLogLib and it
# consists of only the R_LogOut.cppfile
add_library(RLogLib src/R_LogOut.cpp)

