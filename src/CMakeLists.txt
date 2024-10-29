cmake_minimum_required(VERSION 3.28)
project(computer)

set(CMAKE_CXX_STANDARD 26)

add_library(cpu cpu/cpu.cpp)
add_library(ram ram/ram.cpp)
add_library(disk disk/disk.cpp)
add_library(gpu gpu/DISPLAY.cpp)
add_library(kbd kbd/KEYBOARD.cpp)

target_include_directories(cpu PUBLIC ${CMAKE_SOURCE_DIR}/src/cpu)
target_include_directories(ram PUBLIC ${CMAKE_SOURCE_DIR}/src/ram)
target_include_directories(disk PUBLIC ${CMAKE_SOURCE_DIR}/src/disk)
target_include_directories(gpu PUBLIC ${CMAKE_SOURCE_DIR}/src/gpu)
target_include_directories(kbd PUBLIC ${CMAKE_SOURCE_DIR}/src/kbd)

target_link_libraries(disk PUBLIC ram)
target_link_libraries(kbd PUBLIC ram)
target_link_libraries(gpu PUBLIC ram)
target_link_libraries(cpu PUBLIC ram)


add_executable(computer main.cpp)
target_link_libraries(computer cpu ram disk gpu kbd)
