#include "pch.h"
#include "CppUnitTest.h"
#include "DFW/DContainers.h"
#include "DFW/DBasicTypes.h"
#include "DFW/DString.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestDFW::Containers
{
	using namespace DogFW;

	TEST_CLASS(ListTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			List<Int64> list;
			list.pushBack(10); list.pushBack(5); list.pushBack(7);
			list.pushBack(1); list.pushBack(8);

			// expect [10 5 7 1 8]
			WString s;
			for (auto i : list)
			{
				s += std::to_wstring(i);
			}
			Assert::AreEqual(L"105718", s.c_str());
			Assert::AreEqual(5LLU, list.getSize());
		}
		TEST_METHOD(TestMethod2)
		{

		}
	};
}
