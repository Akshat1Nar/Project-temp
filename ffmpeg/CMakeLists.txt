cmake_minimum_required(VERSION 3.16)
project(FFmpeg)

find_package(PkgConfig REQUIRED)
pkg_check_modules(AVCODEC     REQUIRED IMPORTED_TARGET libavcodec)
pkg_check_modules(AVFORMAT    REQUIRED IMPORTED_TARGET libavformat)

add_library(FFmpeg INTERFACE IMPORTED GLOBAL)

target_link_libraries(FFmpeg INTERFACE
    PkgConfig::AVCODEC
    PkgConfig::AVFORMAT
)
