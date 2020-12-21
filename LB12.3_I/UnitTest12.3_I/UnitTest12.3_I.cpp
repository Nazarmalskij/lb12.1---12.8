#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\lb12\LB12.3_I\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest123I
{
	TEST_CLASS(UnitTest123I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Info info;
			Elem* L;
			L->info = 2;
			int c;
			c = Process(L);
			Assert::AreEqual(c, 2);
		}
	};
}
