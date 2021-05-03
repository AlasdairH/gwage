#include <iostream>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "window.h"

int main()
{
    Window window;

    while (!glfwWindowShouldClose(window.getWindow()))
    {
        glfwPollEvents();
    }
}