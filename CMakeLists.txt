cmake_minimum_required(VERSION 3.16)
project(firmware_cpp_practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(app
  src/main.cpp
  src/Blinker.cpp
)

target_include_directories(app PRIVATE include)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(app PRIVATE -Wall -Wextra -Werror -O2)
endif()
