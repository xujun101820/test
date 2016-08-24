// Reverse.cpp : 定义控制台应用程序的入口点。
//
#include "string"
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
#include<vector>
using namespace std;
bool isMatch(string s, string p) 
{
	if (s == p)
		return true;
	else
	{
		string strDot, strStar;
		strDot = p; strStar = p;
		while (1)
		{
			int pos = strStar.find('*', 0);
			if (pos == string::npos)
				break;
			int beforePos = pos-1;int afterPos=-1;
			/*if (pos > 0)
				beforePos = pos - 1;*/
			if (pos < strStar.length() - 1)
				afterPos = pos + 1;
			if (afterPos == -1)
			{
				if (strStar[beforePos] == s[0] || strStar[beforePos]=='.')
					return true;
			}
			else
			{
				if ((strStar[beforePos] == s[0] || strStar[beforePos] == '.') && (strStar[afterPos] == s[s.length() - 1] || strStar[afterPos] == '.'))
					return true;
			}
			strStar = strStar.substr(pos + 1, strStar.length()-1-pos);
		}
		while (1)
		{
			int pos2 = strDot.find('.', 0);
			if (pos2 == string::npos)
				break;
			for (int i = 0; i < s.length(); i++)
			{
				int len = s.length();
				int istart = pos2 - i;
				int iend = istart + len-1;
				if (istart>0);
			}
		}
	}
	
}
int myAtoi(string str)
{
	long long resultInt=0;
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' || str[i] == 0)
			count++;
		else
			break;
	}
	str = str.substr(count,str.length()-count);
	int count1 = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-' || (str[i]>='0'&&str[i]<='9'))
			count1++;
		else
			break;
	}
	str = str.substr(0, count1);
	if (str[0] == '+' || str[0] == '-')
	{
		if (str.length()>11)
		{
			if (str[0] == '-')
				return -pow(2, 31);
			else
				return pow(2, 31) - 1;
		}
		for (int i = 1; i < str.length(); i++)
		{
			if (str[i]<'0'||str[i]>'9')
				return 0;
			else
			{
				int temp = str[i] - '0';
				resultInt = resultInt * 10 + temp;
			}
		}
		if (str[0] == '-')
			resultInt = -resultInt;
	}
	else if (str[0]<'0' || str[0]>'9')
	{
		return 0;
	}
	else
	{
		if (str.length()>10)
		{
			return pow(2, 31) - 1;
		}
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i]<'0' || str[i]>'9')
				return 0;
			else
			{
				int temp = str[i] - '0';
				resultInt = resultInt * 10 + temp;
			}
		}
	}
	if (resultInt > (pow(2, 31) - 1))
		return (pow(2, 31) - 1);
	else if (resultInt <(-pow(2, 31)))
		return -pow(2, 31);
	else
		return resultInt;
}

	// l is left parentheses used, r is right parentheses used
	// cur is initialized with ')'
void search(int l, int r, int n, string& cur, vector<string> &ret) 
{
	if (l == n) {
		ret.push_back(cur);
		return;
	}
	if (r < l) search(l, r + 1, n, cur, ret);

	cur[l + r] = '(';
	search(l + 1, r, n, cur, ret);
	cur[l + r] = ')';
}

vector<string> generateParenthesis(int n) 
{
	string cur;
	vector<string> ret;

	cur.resize(2 * n, ')');
	ret.reserve(2 * n);
	search(0, 0, n, cur, ret);

	return ret;
}

int reverse(int n)
{
	long long reverseNum=0;
	int temp=0;
	int mark = n;
	while (1)
	{
		temp = mark % 10;
		reverseNum = reverseNum * 10 + temp;
		mark = mark / 10;
		if (mark == 0)
			break;
	}
	if (reverseNum > (pow(2, 31) - 1) || reverseNum<-pow(2, 31))
		return 0;
	else
		return reverseNum;
}

int main()
{
	/*double x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		double a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << a << endl;
	}*/
	int a = 1534236469;
	long long b = 9646324351;
	int c = pow(2,31)-1;
	string s = "adsf";
	int pos = s.find('a', 0);
	//int result = myAtoi("9568585995868904868959040");
	vector<string> result = generateParenthesis(3);
	return 0;
}
//#include  <iostream> 
//#include  <vector>
//#include "string"
//#include <cctype>
//#include <string>
//using namespace std;
//int main()
//{
//	int T;
//	while (cin >> T)
//	{
//		vector<string> store;
//		for (int i = 0; i < T; i++)
//		{
//			string temp;
//			cin >> temp;
//			store.push_back(temp);
//		}
//		for (int i = 0; i < T; i++)
//		{
//			string tempout = store[i];
//			int findR = tempout.find('R',0);
//			int findC= tempout.find('C', 0);
//				
//			if (findR != string::npos&&findC != string::npos&&findR>findC)
//			{
//				if (findR == 0 && (tempout[1] > 'Z' || tempout[1] < 'A'))
//				{
//
//					string s1 = tempout.substr(findR + 1,findC - findR-1);
//					int Num1 = atoi(s1.c_str());
//					string s2 = tempout.substr(findC + 1, tempout.length- findC - 1);
//					int Num2 = atoi(s2.c_str());
//					string out = "";
//					while (Num2 != 0)
//					{
//						int yu = Num2 % 26;
//						out += 'A' + yu;
//						Num2 = Num2 / 26;
//					}
//					cout << out << s1 << endl;
//				}
//				else
//				{
//					string out1 = "";
//					for (int i = 0; i < tempout.length(); i++)
//					{
//						if (tempout[i]>'A'&&tempout[i] < 'Z')
//							out1 += tempout[i];
//					}
//					int num = 0;
//					for (int i = out1.length() - 1; i >= 0; i--)
//					{
//						num += (out1[i] - 'A') * 26;
//					}
//					cout << itoa(num) << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}