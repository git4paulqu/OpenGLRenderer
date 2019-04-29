#include "Graphics.h"

Graphics::Graphics()
{
}

Graphics::~Graphics()
{
}

int Graphics::Initialize(WindowContext& windowContext)
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	_glWindow = glfwCreateWindow(windowContext.screenHeight, windowContext.screenWidth, windowContext.title, NULL, NULL);
	if (nullptr == _glWindow)
	{
		printf("create window failed.");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(_glWindow);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		printf("glad load loader failed.");
		return -1;
	}
	return 0;
}

void Graphics::Quit()
{
	glfwTerminate();
}

void Graphics::Render()
{
	while (!glfwWindowShouldClose(_glWindow))
	{
		glfwSwapBuffers(_glWindow);
		glfwPollEvents();
	}
}
