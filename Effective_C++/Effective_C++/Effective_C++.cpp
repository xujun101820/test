// Effective_C++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class ClxBase
{
public:
	ClxBase() {};
	~ClxBase() { cout << "Output from the destructor of class ClxBase!" << endl; };

	virtual void DoSomething() { cout << "Do something in class ClxBase!" << endl; };
};

class ClxDerived : public ClxBase
{
public:
	ClxDerived() {};
	~ClxDerived() { cout << "Output from the destructor of class ClxDerived!" << endl; };

	void DoSomething() { cout << "Do something in class ClxDerived!" << endl; };
};
class Widget
{
public:
	Widget();
	~Widget();
	Widget & operator=(const Widget& rhs);
private:
	string *p;
	int len;
};

Widget::Widget()
{
}

Widget::~Widget()
{
}
Widget & Widget::operator=(const Widget& rhs)
{
	if (this == &rhs) return *this;
	delete p;
	p = new string(*rhs.p);
	return *this;
}
int _tmain(int argc, _TCHAR* argv[])
{
	ClxBase *pTest = new ClxDerived;
	pTest->DoSomething();
	delete pTest;
	Widget a;
	a = a;
	return 0;
}

