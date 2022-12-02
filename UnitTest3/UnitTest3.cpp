#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_03/Lab_05_03.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k;
			k = j(5);
			Assert::AreEqual(k, 0.2904, 0.001);
		}
	};
}
