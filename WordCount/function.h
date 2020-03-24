#pragma once
#include "function.h"
#include<fstream>
using namespace std;

class WordCount {
private:
	ifstream file;
public:
	WordCount(char *str) {
		file.open(str);
	}
	bool CheckFile() {
		return file.is_open();
	}
	~WordCount()
	{
		file.close();
	}
	unsigned int CountChar();
	unsigned int CountWord();
	unsigned int CountRow();
};

