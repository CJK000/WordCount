#include "pch.h"
#include "CppUnitTest.h"
#include<fstream>
#include "../WordCount/function.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace wcTest1
{
	TEST_CLASS(wcTest1)
	{
	public:

		TEST_METHOD(TestCharCount)
		{
			ifstream file("test.c");
			unsigned int char_num = CountChar(file);
			Assert::AreEqual(char_num, (unsigned int)91);

		}
		TEST_METHOD(TestWordCount)
		{
			ifstream file("test.c");
			unsigned int word_num = CountWord(file);
			Assert::AreEqual(word_num, (unsigned int)12);

		}
		TEST_METHOD(TestRowCount)
		{
			ifstream file("test.c");
			unsigned int row_num = CountRow(file);
			Assert::AreEqual(row_num, (unsigned int)15);

		}
	};
}
