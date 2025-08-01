cmake_minimum_required(VERSION 3.21)
project(untitled2)

set(CMAKE_C_STANDARD 99)

add_executable(untitled2 server.c)

# Линковка с Winsock:
target_link_libraries(untitled2 ws2_32)
