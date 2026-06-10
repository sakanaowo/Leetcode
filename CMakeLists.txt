cmake_minimum_required(VERSION 3.20)
project(Leetcode LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE ALL_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/*.c"
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

list(FILTER ALL_SOURCES EXCLUDE REGEX ".*/cmake-build-.*/.*")

foreach(SRC IN LISTS ALL_SOURCES)

    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}" "${SRC}")

    get_filename_component(NAME "${REL_PATH}" NAME_WE)
    get_filename_component(DIR  "${REL_PATH}" DIRECTORY)

    if(DIR STREQUAL "")
        set(TARGET "${NAME}")
    else()
        string(REPLACE "/" "_" TARGET "${DIR}_${NAME}")
    endif()

    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" TARGET "${TARGET}")

    add_executable(${TARGET} ${SRC}
            codeptit/C/C01036.c
            codeptit/C/C01037.c
            codeptit/C/C01038.c
            codeptit/C/C01039.c
            codeptit/C/C01043.c
            codeptit/C/_temp.c)

    # chỉ link math cho C
    if(SRC MATCHES "\\.c$")
        target_link_libraries(${TARGET} PRIVATE m)
    endif()

endforeach()