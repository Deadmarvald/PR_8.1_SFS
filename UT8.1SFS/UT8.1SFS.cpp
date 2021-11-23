#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1SFS/Lab_08_1_SFS.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT81SFS
{
	TEST_CLASS(UT81SFS)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;

			t = Count("FFFFF");

			Assert::AreEqual(t, 0);
		}
	};
}