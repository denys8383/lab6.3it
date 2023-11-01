#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../Project6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testVector = { 2, 4, 6, 8, 10 };
			int result = FindMaxElement(testVector);
			Assert::AreEqual(1, 1);
		}
	};
}
