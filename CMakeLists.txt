cmake_minimum_required(VERSION 3.0.0)
project(cmake_test)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libs)
add_subdirectory(app)
message("\n${PROJECT_BINARY_DIR}\n")
message("\n$<INSTALL_INTERFACE:include>\n")


