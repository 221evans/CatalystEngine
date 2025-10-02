cmake_minimum_required(VERSION 3.16)
project(CatalystEngine C)

set(CMAKE_C_STANDARD 23)

# Add FetchContent to pull raylib at configure time
include(FetchContent)
FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
)
# Disable building examples/shaders to speed up
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(raylib)

add_library(CatalystEngine STATIC
        Flags/Flags.h
        Entites/EntityTextures.h
        Input/KeyboardInput.c
        Input/KeyboardInput.h
        Animation/Animation.c
        Animation/Animation.h)

# Link raylib as PUBLIC so that projects linking to CatalystEngine get raylib too
target_link_libraries(CatalystEngine PUBLIC raylib)

target_include_directories(CatalystEngine PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Entities
        ${CMAKE_CURRENT_SOURCE_DIR}/Flags
        ${CMAKE_CURRENT_SOURCE_DIR}/Input
        ${CMAKE_CURRENT_SOURCE_DIR}/Animation
)

# On Linux/BSD, link additional system libs if needed
if(UNIX AND NOT APPLE)
  find_package(X11 REQUIRED)
  target_link_libraries(CatalystEngine PRIVATE m pthread dl rt X11)
endif()
