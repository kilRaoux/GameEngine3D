#pragma once
#include <stdio.h>
#include "Application.h"
#ifdef OP_PLATFORM_WINDOWS

extern Opal::Application* Opal::CreateApplication();
int main(int argc, char** argv) {
	printf("Hello World");
	auto app = Opal::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Opal only work on Windows.
#endif