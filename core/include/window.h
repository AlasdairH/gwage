#include <iostream>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

class Window
{
public:
    Window();
    ~Window();

    GLFWwindow* getWindow();

private:
    GLFWwindow* m_window;
};