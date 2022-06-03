cmake_minimum_required(VERSION 3.23.2)

set(This programaTests)

project(${This} CXX)

set(Sources
    programaTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    Programa
)

add_test(
    NAME ${This}
    COMMAND ${This}
)