#pragma once
#include "DEngine/Engine/IEngine.h"

namespace DogFW::engine
{
	class EngineExample:public IEngine
	{
	public:
		EngineExample();
		~EngineExample();
	 
		static EngineExample* get();

	public:

	protected:
		void initSystemFile() override;
		void initSystemLog() override;
		void initSystemApp() override;
		void initSystemWindow() override;
	};
}

