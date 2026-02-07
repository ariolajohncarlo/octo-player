cmake_minimum_required(VERSION 3.16...3.27)

add_library(gui
    MainWindow.cpp)

target_link_libraries(gui
    PRIVATE
        Qt6::Widgets
)

target_include_directories(gui
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})
