cmake_minimum_required(VERSION 3.15)
project(Workspace)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Workspace main.cpp)

target_compile_options(Workspace PRIVATE -Wall -Wextra -Werror)
