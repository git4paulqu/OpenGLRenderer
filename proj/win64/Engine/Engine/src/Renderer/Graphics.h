#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

#include "TypeDefine.h"

class Graphics
{
public:
	Graphics();
	~Graphics();

	int Initialize(WindowContext& windowContext);
	void Quit();
	void Render();

private:
	GLFWwindow* _glWindow;
};