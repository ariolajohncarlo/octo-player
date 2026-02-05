cmake_minimum_required(VERSION 3.16...3.27)

add_executable(octoplayer
    main.cpp
)

target_link_libraries(octoplayer PRIVATE Qt6::Widgets)