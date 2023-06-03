cmake_minimum_required(VERSION 3.25)
project(MetalStarter)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp
        src/platform/apple.h
        src/platform/apple.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE lib/metal-cpp)

target_link_libraries(${PROJECT_NAME} "-framework Foundation")
target_link_libraries(${PROJECT_NAME} "-framework QuartzCore")
target_link_libraries(${PROJECT_NAME} "-framework Metal")
