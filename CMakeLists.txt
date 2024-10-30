cmake_minimum_required (VERSION 3.30)
project (my_opengl_project)

find_package(OpenGL REQUIRED)


add_executable(
    my_opengl_project main.cpp
    glad.h
    glad.c
    game.cpp
    resourceManager.cpp
    shader.cpp
    stb_image.cpp
    texture.cpp)

target_link_libraries (my_opengl_project glfw)
