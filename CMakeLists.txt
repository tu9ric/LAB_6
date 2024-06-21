cmake_minimum_required(VERSION 3.5)
project(multifile)
set(SOURCE_FILES main.cpp matrix.cpp convolution.cpp subdiscretization.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
