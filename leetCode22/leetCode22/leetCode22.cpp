// leetCode22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
using namespace std;
vector<string> generateParenthesis(int n) 
{
	string s;
	vector<string> v;
	generate(n, n, s, v);
	return v;
}
void generate(int left, int right, string s, vector<string> &v)
{
	if (left)
	{
		generate(left - 1, right, s + "(", v);
		if (left<right)
	}
}
int main()
{
	return 0;
}

