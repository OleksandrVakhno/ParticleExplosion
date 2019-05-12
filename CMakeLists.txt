cmake_minimum_required(VERSION 3.14)
project(ParticleExplosion)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

set(SOURCE_FILES src/main.cpp)

add_executable(ParticleExplosion main.cpp src/Screen.cpp include/Screen.h src/Particle.cpp include/Particle.h src/Swarm.cpp include/Swarm.h)
target_link_libraries(ParticleExplosion ${SDL2_LIBRARY})