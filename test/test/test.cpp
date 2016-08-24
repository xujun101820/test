//// test.cpp : 定义控制台应用程序的入口点。
////
//
#include "stdafx.h"
//#include "iostream"
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <sstream>
//using namespace std;
//int cc;
//int getValue(int n)
//{
//	int i = 0; int j = 2;
//	while (j + 1 <= n)
//	{
//		i = i + 1;
//		j = 2 * j + 1;
//	}
//	return n - 2 * (i);
//}
//class t
//{
//public:
//	int b=0; int c;
//};
//string getResult(long ulDataInput)
//{
//	string out="";
//	while (ulDataInput>1)
//	{
//		for (int i = 2; i <= ulDataInput; i++)
//		{
//			if (ulDataInput%i == 0)
//			{
//				stringstream ss; string temp;
//				ss << i; ss >> temp;
//				out = out + temp + " ";
//				ulDataInput /= i;
//				break;
//			}
//		}
//	}
//	return out;
//}
//int main()
//{
//	/*int a;
//	while (cin >> a)
//		cout << getValue(a) << endl;*/
//	/*vector <int> v; 
//	v.push_back(1); v.push_back(2);
//	for (int i = 0; i < 5; i++)
//		v.push_back(i);
//	std::remove(v.begin(), v.end(), 2);*/
//	int a;
//	//int b = a;
//	t t; 
//	int b = t.c;
//	string s = getResult(180);
//	//int b =16;
////	const int  &  a=b;
//	char string1[] = "no man is an island";
//	char string2[2] = {'\0'};
//	strcpy(string2,string1);
//	cout << string1 << endl;
//	cout << string2 << endl;
//	int count = 0;
//loop:
//	count++;
//	if (count < 5)
//		goto loop;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base(int a) : val(a) {}
//	Base() : val(0) {}
//private:
//	int val;
//};
//
//class A : public Base
//{
//public:
//	A(int v) : p(v){}
//	void print_val() { cout << "hello:" << p << endl; }
//private:
//	int p;
//};
//
//int main(int argc, char **argv)
//{
//	int pp = 45;
//	A b(pp);
//	b.print_val();
//}
//#include <iostream> 
//using namespace std;
//class   animal
//{
//public:
//	void   sleep()
//	{
//		cout << "animal   sleep " <<endl;
//	}
//	void   breathe()
//	{
//		cout << "animal   breathe " <<endl;
//	}
//};
//class   fish :public   animal
//{
//	int a = 100;
//public:
//	void   breathe()
//	{
//		cout << "fish   bubble " << this->a <<endl; 
//	}
//};
//void   main()
//{
//	string a = "assdd";
//	int b = a[0];
//	fish   fh;
//	animal   *pAn =NULL;
//	pAn->breathe();
//}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class father
{
public:

	void fun()
	{
		cout << "father's fun" << endl;
	}
	void fun1(int a)
	{
		cout << "father" << a << endl;
	}
};

class son :public father
{
public:
	void fun()
	{
		cout << "son's fun" << endl;
	}
};

#include <iostream>
using namespace std;
int main()
{
	int month;
	while (cin >> month)
	{
		if (month<3) cout << 1;
		else
		{
			int m_3 = 0, m_2 = 1, m_1 = 0;
			int i = 2;
			while (i<month)
			{
				m_3 += m_2;
				m_2 = m_1;
				m_1 = m_3;
				i++;
			}
			cout << (m_1 + m_2 + m_3);
		}
	}
}