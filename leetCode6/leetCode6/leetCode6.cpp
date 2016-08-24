// leetCode6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string"
using namespace std;
string convert(string s, int numRows)
{
	if (numRows == 1)
		return s;
	string convertStr = "";
	for (int j = 0; j<numRows; j++)
	{
		int tempj;
		int count = 0;
		if (j != numRows - 1&&j!=0)
		{
			for (int i = j; i<s.length(); i = i + tempj)
			{
				if (count % 2 == 0)
					tempj = 2 * numRows - 2 * (j + 1);
				else
					tempj = 2 * j;
				convertStr += s[i];
				++count;
			}
		}
		else
		{
			for (int i = j; i<s.length(); i = i + tempj)
			{
				tempj = 2 * numRows - 2;
				convertStr += s[i];
			}
		}
	}
	return convertStr;
}
int main()
{
	string s = "PAYPALISHIRING";
	string out = convert(s,4);
	return 0;
}

