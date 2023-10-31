#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1IT/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6it
{
	TEST_CLASS(UnitTest6it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 3, 5, 7, 9 };
			int size = 5;
			Assert::AreEqual(Sum(a, size), 0, 1e-1);
		}
	};
}
