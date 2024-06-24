cmake_minimum_required(VERSION 3.15)
project(bye CXX)




add_library(bye src/bye.cpp)
target_include_directories(bye PUBLIC include)



set_target_properties(bye PROPERTIES PUBLIC_HEADER "include/bye.h")
install(TARGETS bye)
