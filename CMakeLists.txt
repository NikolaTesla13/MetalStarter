cmake_minimum_required(VERSION 3.23)
project(MetalStarter)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp
        src/platform/apple.h src/platform/apple.cpp src/platform/mtk_view.h src/platform/mtk_view.cpp src/gfx/renderer.h src/gfx/renderer.cpp src/platform/app_delegate.h src/platform/app_delegate.cpp src/gfx/base_renderer.cpp src/gfx/base_renderer.h)

target_include_directories(${PROJECT_NAME} PRIVATE lib/metal-cpp)
target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} "-framework Foundation")
target_link_libraries(${PROJECT_NAME} "-framework QuartzCore")
target_link_libraries(${PROJECT_NAME} "-framework Metal")
target_link_libraries(${PROJECT_NAME} "-framework MetalKit")
target_link_libraries(${PROJECT_NAME} "-framework AppKit")
