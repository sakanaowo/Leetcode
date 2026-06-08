cmake_minimum_required(VERSION 3.20)
project(Leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE PROBLEM_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

list(FILTER PROBLEM_SOURCES EXCLUDE REGEX ".*/cmake-build-.*/.*")

foreach(SOURCE_FILE IN LISTS PROBLEM_SOURCES)
    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}" "${SOURCE_FILE}")

    get_filename_component(FILE_NAME "${REL_PATH}" NAME_WE)
    get_filename_component(DIR_NAME "${REL_PATH}" DIRECTORY)

    if(DIR_NAME STREQUAL "")
        set(TARGET_NAME "${FILE_NAME}")
    else()
        set(TARGET_NAME "${DIR_NAME}_${FILE_NAME}")
    endif()

    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" TARGET_NAME "${TARGET_NAME}")

    add_executable("${TARGET_NAME}" "${SOURCE_FILE}"
            codeptit/CPP0743.cpp)
endforeach()