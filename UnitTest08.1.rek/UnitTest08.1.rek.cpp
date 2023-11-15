#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../PR-08.1.rekurs/PR-08.1.rekurs.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081rek
{
	TEST_CLASS(UnitTest081rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				char str[101] = "a**b**c**d";

				int pos = findThirdCommaIndex(str, 0, 0);

				Assert::AreEqual(pos, -1);
			}
		}
	};
}
