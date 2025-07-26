cmake_minimum_required(VERSION 3.10)

# Project name
project(LearningCMake)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header directory
include_directories(${PROJECT_SOURCE_DIR}/header)

# Add all source files
file(GLOB SOURCES 
    "src/*.cpp"
    "*.cpp"
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})
