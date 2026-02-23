cmake_minimum_required(VERSION 3.16)
project(leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB problem_dirs LIST_DIRECTORIES true CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*)

foreach (problem_dir ${problem_dirs})
    if (IS_DIRECTORY ${problem_dir})
        file(GLOB problem ${problem_dir}/*.cpp)

        if (problem) # To avoid subdirectory without cpp file
            get_filename_component(problem_name ${problem} NAME_WE)
            add_executable(${problem_name} ${problem})
        endif ()
    endif ()
endforeach()
