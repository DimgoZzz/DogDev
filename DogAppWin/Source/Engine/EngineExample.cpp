#include "EngineExample.h"

namespace DogFW::engine
{
#pragma region Constructors
	EngineExample::EngineExample()
	{

	}
	EngineExample::~EngineExample()
	{

	}

#pragma endregion Constructors


#pragma region Public Api
	EngineExample* EngineExample::get()
	{
		return static_cast<EngineExample*>(engptr_);
	}
#pragma endregion Public Api


#pragma region SystemInit
	void EngineExample::initSystemFile()
	{
		fileSys_ = new FileSystem();
		fileSys_->init();
	}
	void EngineExample::initSystemLog()
	{
		
	}
	void EngineExample::initSystemApp()
	{

	}
	void EngineExample::initSystemWindow()
	{

	}
#pragma endregion SystemInit

}