
#include <stdio.h>

#include "Renderer/Graphics.h"
#include "TypeDefine.h"

int main()
{
	Graphics* graphics = new Graphics();
	WindowContext windowContext;
	windowContext.screenWidth = 640;
	windowContext.screenHeight = 640;
	windowContext.title = "Renderer";
	graphics->Initialize(windowContext);
	graphics->Render();
	graphics->Quit();
	getchar();
	return 0;
}
