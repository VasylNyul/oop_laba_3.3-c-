#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.3(c)/Fraction.h"
#include "../oop_laba_3.3(c)/Object.h"
#include "../oop_laba_3.3(c)/Fraction.cpp"
#include "../oop_laba_3.3(c)/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest33c
{
	TEST_CLASS(oopUnitTest33c)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction f;
			f.set_a(1);
			Assert::AreEqual(1, f.get_a());
		}
	};
}
