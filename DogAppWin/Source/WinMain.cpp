#include "DFW/DWin.h"

#include "DFW/DContainers.h"

using namespace DogFW;


int WINAPI wWinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPWSTR, _In_ int)
{
	WString result;
	List<UInt64> list;

	for (int i = 0; i < 10; ++i)
	{
		list.pushBack(i);
	}
	auto iter = list.begin();
	list.insertAfter(iter, 123); 
	iter++;	++iter; ++iter;
	list.insertBefore(iter, 321); 
	iter++;

	for (auto j : list)
	{
		result+=std::to_wstring(j);
		result += L" ";
	}

	
	//win::msgbox::info(std::to_wstring(j.second));

	// += std::to_wstring(j.first.operator*()); 
	//result += std::to_wstring(*iter);

	win::msgbox::info(result);

	




	return 0;
}

