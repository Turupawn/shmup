cmake_minimum_required(VERSION 3.5)
include_directories(include)
set (CMAKE_CXX_STANDARD 11)
link_directories(./)

IF (UNIX AND NOT APPLE)
  file(GLOB_RECURSE SOURCES "Rosalila/*.cpp" "RosalilaShooter/*.cpp" main.cpp)
  add_executable(shmup ${SOURCES})
  target_link_libraries (shmup GL SDL2 SDL2_image SDL2_ttf SDL2_mixer libsteam_api.so)
ENDIF ()