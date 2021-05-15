#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba1Figures/Laba1Figures.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle rectangle;
			Assert::AreEqual(rectangle.Pr(6, 8), 28);
		}
		TEST_METHOD(TestMethod2)
		{
			Square squar;
			Assert::AreEqual(squar.Pr(5,5), 20);
		}
		TEST_METHOD(TestMethod3)
		{
			Rectangle rectangle;
			Assert::AreEqual(rectangle.Sq(10, 0), 0);
		}
		TEST_METHOD(TestMethod4)
		{
			Square squar;
			Assert::AreEqual(squar.Sq(5, 5), 25);
		}
	};
}
