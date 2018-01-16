#pragma once

#define WIN32_MEAN_AND_LEAN
#include <windows.h>
#undef min
#undef max

#include <functional>
#include <iostream>

#include <GL/glew.h>

#define NANOVG_GL3_IMPLEMENTATION
#define GLFW_INCLUDE_GLEXT
#include <GLFW/glfw3.h>
#include <nanovg.h>

#include <nanogui/opengl.h>

#include <nanogui/nanogui.h>
