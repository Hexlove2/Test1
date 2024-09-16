# Version Required: Lowest
cmake_minimum_required( VERSION 3.0 )

# C++ Standard
set(CMAKE_CXX_STANDARD 11)

# Create compile_commands.json automatically
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Your Project Name
project(Test1)

# Set include path
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set output path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# The source dirctory list
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

# Create the final add 
add_executable(test1 ${SRC_LIST})



