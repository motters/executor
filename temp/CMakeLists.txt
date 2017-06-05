cmake_minimum_required(VERSION 3.3)
project(executor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/validators/validator.cpp src/validators/validator.h src/services/configuration.cpp src/services/configuration.h src/kernel/kernel.cpp src/kernel/kernel.h src/services/executor.cpp src/services/executor.h src/services/buffer.cpp src/services/buffer.h src/server/server.cpp src/server/server.h src/commands/command.cpp src/commands/command.h)
add_executable(executor ${SOURCE_FILES})