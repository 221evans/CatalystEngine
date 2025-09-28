cmake_minimum_required(VERSION 4.0)
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

add_executable(CatalystEngine main.c
        Entites/Player.c
        Entites/Player.h
        Entites/Flags/Flags.h
        Entites/EntityTextures.h)
target_link_libraries(CatalystEngine PRIVATE raylib)

# Copy Assets folder to build directory
add_custom_command(TARGET CatalystEngine POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/Assets
    $<TARGET_FILE_DIR:CatalystEngine>/Assets
)

# On Linux/BSD, link additional system libs if needed
if(UNIX AND NOT APPLE)
  find_package(X11 REQUIRED)
  target_link_libraries(CatalystEngine PRIVATE m pthread dl rt X11)
endif()
