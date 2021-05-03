#include "window.h"

Window::Window()
{
    if (false == glfwInit())
    {
        std::cout << ("glfw failed to initialise") << std::endl;
    }
    else
    {
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
        m_window = glfwCreateWindow(640, 480, "gwage", NULL, NULL);
        if (!m_window)
        {
            std::cout << ("Window failed to initialise") << std::endl;
        }
        else
        {
            glfwMakeContextCurrent(m_window);
            gladLoadGL();

            int width, height;
            glfwGetFramebufferSize(m_window, &width, &height);
            glViewport(0, 0, width, height);
        }
    }
}

Window::~Window()
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
}

GLFWwindow* Window::getWindow()
{
    return m_window;
}