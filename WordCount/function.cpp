#include<string>
#include<cstring>
#include<iostream>
#include<fstream>
#include"function.h"
using namespace std;





unsigned int WordCount::CountChar() {
	file.clear();
	file.seekg(ios::beg);
	unsigned char_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		char_num += str.length();
	}
	return char_num;
}



unsigned int WordCount::CountWord() {
	int i;
	file.clear();
	file.seekg(ios::beg);
	unsigned int word_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		bool isWord = false;	//标记当前字符是否为一个单词部分
		for (i = 0; i < (int)str.length(); i++) {
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {	//当前字符是一个字母
				if (isWord == false) {	//如果前一个字符不是单词的一部分，那单词数加一，改变标记
					word_num++;
					isWord = true;
				}
			}
			else {
				isWord = false;
			}
		}
	}
	return word_num;
}




unsigned int WordCount::CountRow() {
	file.clear();
	file.seekg(ios::beg);
	unsigned int row_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		row_num++;
	}
	return row_num;
}






/*
void Count(ifstream &file) {
	file.seekg(ios::beg);
	int i, j, k;
	unsigned int empty_row_num = 0;
	unsigned int code_row_num = 0;
	unsigned int annotation_row_num = 0;
	string str;

	bool manyRowAnnotation = false;
	bool isAnnotationRow = false;
	while (!file.eof())
	{
		getline(file, str);
		bool oneRowAnnotation = false;
		bool isCodeRow = false;

		if (str.length() == 0) {
			empty_row_num++;
			if()
			continue;
		}

		isAnnotationRow = manyRowAnnotation;


	}
}
*/