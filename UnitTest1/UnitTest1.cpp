#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8] = { 1,2,3,-3,-2,-1,6,5 };
			int t = SumaPar(a, 7);
			Assert::AreEqual(t, 6);
		}

		TEST_METHOD(TestMethod2)
		{
			int a[8] = { 2,2,-8,1,5,4,-9,11};
			int t = number(a,7);
			Assert::AreEqual(t, 4);
		}
		TEST_METHOD(TestMethod3)
		{
			int a[8] = { 2,4,5,4,8,2,-5,11};
			int t = SumaPar(a, 7);
			int r = number(a, 7);
			int q = arif(t,r);
			Assert::AreEqual(q,4);
		}
	};
}
