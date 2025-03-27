cmake_minimum_required(VERSION 3.5.0)
project(MyCMakeproject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(include) # Add the 'include' directory

# Add executable and specify output directory
add_executable(main src/main.cpp src/TicTacToeField.cpp src/TicTacToeGame.cpp)
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Set C++ standard
set_property(TARGET main PROPERTY CXX_STANDARD 17)