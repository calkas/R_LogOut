##.:: R_LogOut Console ::. 

Own LogOut Console

Usage:
> R_Log::RLog().Out("HELLO").Out("World",R_Log::INFO);


######Cmake Tutorial:
Main Project:
```cmake
cmake_minimum_required(VERSION 3.5)

project(LogDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LogDemo main.cpp)

add_subdirectory(R_LogOut/)
target_link_libraries(LogDemo RLogLib)
```

