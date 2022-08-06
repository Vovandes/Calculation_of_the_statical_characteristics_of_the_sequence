cmake_minimum_required(VERSION 3.15)

project(Calculation_of_the_statical_characteristics_of_the_sequence CXX)

add_executable(Calculation_of_the_statical_characteristics_of_the_sequence
    main.cpp
    statistics.hpp
    min.hpp
    max.hpp
    mean.hpp
    std.hpp
    pct90.hpp
    pct95.hpp
)

target_include_directories(Calculation_of_the_statical_characteristics_of_the_sequence PRIVATE include)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(Calculation_of_the_statical_characteristics_of_the_sequence PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(Calculation_of_the_statical_characteristics_of_the_sequence PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()

target_compile_features(Calculation_of_the_statical_characteristics_of_the_sequence PUBLIC cxx_std_17)
