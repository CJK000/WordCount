﻿// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
#include<fstream>
#include<cstring>
#include"function.h"
using namespace std;

int main(int argc, char **argv)
{
	WordCount *file = new WordCount(argv[argc-1]);
	if (!file->CheckFile()) {
		cout << "这是一个无效的文件名\n";
		return 0;
	}

	int i, j, k;
	for (i = 1; i < argc-1; i++) {
		if (strlen(argv[i]) != 2 || argv[i][0] != '-') {
			cout << "输入错误\n";
			return 0;
		}
		else {
			if (argv[i][1] != 'c' && argv[i][1] != 'w' && argv[i][1] != 'l') {
				cout << "无此操作\n";
				return 0;
			}
		}
	}
	for (i = 1; i < argc-1; i++) {
		switch (argv[i][1]) {
			unsigned int num;
			case 'c': {
				num = file->CountChar();
				cout << "字符数：" << num << endl;
				break;
			}
			case 'w': {
				num = file->CountWord();
				cout << "词数：" << num << endl;
				break;
			}
			case 'l': {
				num = file->CountRow();
				cout << "行数：" << num << endl;
				break;
			}
			default: break;
		}
	}
	delete file;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
