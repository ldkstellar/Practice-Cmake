cmake_minimum_required(VERSION 3.00)

project(prac-cmake VERSION 0.0.1 LANGUAGES CXX)

#컴파일러 오류 옵션
add_compile_options(-Wall -Wextra)

# 실행 타겟 추가
add_executable(myComputer src/main.cpp)

# 라이브러리 추가
add_library(computer STATIC lib/computer.hpp lib/computer.cpp)
target_include_directories(computer PUBLIC lib)

# 타겟을 라이브러리와 링크
target_link_libraries(myComputer PRIVATE computer)