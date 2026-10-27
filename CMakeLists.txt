cmake_minimum_required(VERSION 3.10)
project(GeometryProject CXX)

# Force standard C++11 or higher
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add compile flags to treat warnings as errors
add_compile_options(-Wall -Werror)

# Build geometry as a static library
add_library(geometry STATIC geometry.cpp geometry.h)

# Add the test executable
add_executable(test_geometry test_geometry.cpp)

# Link the executable to the static library
target_link_libraries(test_geometry geometry)
