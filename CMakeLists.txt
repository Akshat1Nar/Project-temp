cmake_minimum_required(VERSION 3.14)
project(video-app C CXX)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(ffmpeg)

add_definitions(-DGL_SILENCE_DEPRECATION)

list(APPEND SOURCES
    main.cpp
)

add_executable(video-app ${SOURCES})


target_link_libraries(video-app FFmpeg)
