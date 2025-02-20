# cmake 최소 요구 사양
cmake_minimum_required(VERSION 3.00)

# 프로젝트 생성
project(prac-cmake VERSION 0.0.1 LANGUAGES CXX)

# CMAKE 변수 설정

# CMAKE 변수 출력
message(STATUS "System Name: ${CMAKE_SYSTEM_NAME}")
message(STATUS "System Version: ${CMAKE_SYSTEM_VERSION}")
message(STATUS "C++ Compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "C++ Install Directory: ${CMAKE_INSTALL_PREFIX}")

# 모든 target의 버전을 고정

# set(CMAKE_CXX_COMPILER "usr/bin/clang++")

# cpp 버전을 고정
set(CMAKE_CXX_STANDARD 11)

# 컴파일러 오류 옵션
add_compile_options(-Wall -Wextra)

# 실행 target 추가
add_executable(myComputer src/main.cpp)
target_include_directories(myComputer PRIVATE src)
set_target_properties(myComputer PROPERTIES SUFFIX ".out")

# 라이브러리 타입
set(BUILD_SHARED_LIBS FALSE)

# 라이브러리 추가
add_library(computer STATIC lib/computer.hpp lib/computer.cpp)
target_include_directories(computer PUBLIC lib)

# 타겟을 라이브러리와 링크
target_link_libraries(myComputer PRIVATE computer)

install(TARGETS myComputer DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)