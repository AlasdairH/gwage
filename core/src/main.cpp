#include <iostream>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

int main()
{
    std::cout << ("Hello World") << std::endl;
    if (false == glfwInit())
    {
        std::cout << ("glfw failed to initialise") << std::endl;
    }
    else
    {
        std::cout << ("glfw initialised") << std::endl;
    }

    glfwTerminate();
}