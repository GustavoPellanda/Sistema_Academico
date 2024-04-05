cmake_minimum_required(VERSION 3.15)
project(TESTE
  LANGUAGES CXX
  VERSION 1.0
)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(DCMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES OFF)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/**/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.hpp" "include/**/*.hpp")

add_executable(TESTE ${SOURCES})
target_include_directories(TESTE PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)