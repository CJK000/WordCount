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
		WordCount *file = new WordCount("test.c");
		TEST_METHOD(TestCharCount)
		{
			unsigned int char_num = file->CountChar();
			Assert::AreEqual(char_num, (unsigned int)89);
		}
		TEST_METHOD(TestWordCount)
		{
			unsigned int word_num = file->CountWord();
			Assert::AreEqual(word_num, (unsigned int)11);

		}
		TEST_METHOD(TestRowCount)
		{
			unsigned int row_num = file->CountRow();
			Assert::AreEqual(row_num, (unsigned int)15);

		}
	};
}
