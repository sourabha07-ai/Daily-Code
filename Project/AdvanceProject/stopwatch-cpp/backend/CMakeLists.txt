cmake_minimum_required(VERSION 3.15)
project(stopwatch_server CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stopwatch_server
    main.cpp
    Stopwatch.cpp
)

if (WIN32)
    target_link_libraries(stopwatch_server PRIVATE ws2_32)
endif()
