cmake_minimum_required(VERSION 3.12)
project(freopen_stdin_stdout)

set(CMAKE_CXX_STANDARD 11)

add_executable(freopen_stdin_stdout main.cpp)

file(MAKE_DIRECTORY ./data)
add_custom_command(TARGET freopen_stdin_stdout
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/data/input.txt ./data)