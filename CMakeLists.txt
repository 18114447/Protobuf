cmake_minimum_required(VERSION 3.16.3)
project(ProtobufProject)

# 查找Protobuf包
find_package(Protobuf REQUIRED)

# 包含Protobuf头文件
include_directories(${PROTOBUF_INCLUDE_DIRS})

# 包含test子目录
add_subdirectory(test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/test)

# 包含main.cpp作为可执行文件
add_executable(protoMain main.cpp)

# 链接protobuf库到main.cpp
target_link_libraries(protoMain ${PROTOBUF_LIBRARIES})








