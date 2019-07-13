#pragma once
#include "core.h"
namespace Opal {

	class OPAL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
