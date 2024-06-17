cmake_minimum_required(VERSION 3.26)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "C:/Users/njgdn/CLionProjects/SFML-2.6.1/lib/cmake/SFML")


find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

add_executable(SnakeGame main.cpp Snake.cpp Snake.h)

target_link_libraries(SnakeGame sfml-system sfml-window sfml-graphics sfml-audio)