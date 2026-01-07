cmake_minimum_required(VERSION 3.10)
project(DigitalisKiallitasDemo)

set(CMAKE_CXX_STANDARD 17)

# 1. Build the Main Application
add_executable(DemoApp main.cpp)

# 2. Enable Testing features in CMake
enable_testing()

# 3. Build the Test Executable
add_executable(DemoTest test_main.cpp)

# 4. Register the test so 'ctest' can run it
# Name: CheckMessage
# Command: DemoTest
add_test(NAME CheckMessage COMMAND DemoTest)