#pragma once
#include<string>
#include<vector>

//問題と答えを纏める構造体
struct Question
{
	std::string q;	//問題文
	std::string a;	//答え
	std::vector<std::string>b;	//答え(複数ある場合)
};

//問題の配列を表す型
using QuestionList = std::vector<Question>;	//テンプレートを利用した変数をusingで型にした。
