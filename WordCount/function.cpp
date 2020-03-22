#include<string>
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;



unsigned int CountChar(ifstream &file) {
	file.seekg(ios::beg);
	unsigned char_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		char_num += str.length();
	}
	file.clear();
	return char_num;
}



unsigned int CountWord(ifstream &file) {
	int i;
	file.seekg(ios::beg);
	unsigned int word_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		bool isWord = false;
		for (i = 0; i < (int)str.length(); i++) {
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
				if (isWord == false) {
					word_num++;
					isWord = true;
				}
			}
			else {
				isWord = false;
			}
		}
	}
	file.clear();
	return word_num;
}




unsigned int CountRow(ifstream &file) {
	file.seekg(ios::beg);
	unsigned int row_num = 0;
	string str;
	while (!file.eof())
	{
		getline(file, str);
		row_num++;
	}
	file.clear();
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