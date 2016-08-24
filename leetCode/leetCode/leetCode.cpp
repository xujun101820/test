// leetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <math.h>
#include  <iostream> 
using namespace std;
int max(int a,int b)
{
	return a > b ? a : b;
}
int maxArea(vector<int>& height) 
{
	int length = height.size();
	if (length <= 1) return 0;
	int iend = length - 1;
	int istart = 0;
	int maxaera = length*max(height[istart],height[iend]);
	while (istart < iend)
	{
		if (height[istart] < height[iend])
		{
			int temp1 = height[istart];
			++istart;
			if (height[istart] <= temp1)
				continue;
		}
		else
		{
			int temp2 = height[istart];
			--iend;
			if (height[iend] <= temp2)
				continue;
		}
		if (maxaera < max(height[istart], height[iend])*(iend - istart + 1))
			maxaera = max(height[istart], height[iend])*(iend - istart + 1);
	}
	return maxaera;
}
#define INT_MIN     (-2147483647 - 1)
int mySqrt(int x) {
	if (x<0) return INT_MIN;
	if (x == 0 || x == 1) return x;
	int istart = 1; int iend = x; int imid = x/ 2;
	while (istart<iend)
	{
		int temp = imid*imid;
		int imidN = temp / imid;
		if ((imid*imid)>x || imid != imidN)
			iend = imid - 1;
		else
		{
			if ((imid + 1)*(imid + 1)>x)
				return imid;
			else
				istart = imid + 1;
		}
		imid = (istart + iend) / 2;
	}
	return imid;
}
string reverseString(string s) {
	int len = s.length();
	int start = 0;
	int end = len - 1;
	while (start<end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		++start; --end;
	}
	return s;
}
vector<string> letterCombinations(string digits) {
	vector<string> store;
	string s2n[] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	int len = digits.length();
	if (len == 0)
		return store;
	vector<string> temp;
	for (int l = 0; l < len; l++)
	{
		if (digits[l] < '2' || digits[l]> '9')
			return store;
		temp.push_back(s2n[digits[l] - '0']);
	}
	int *p = new int[temp.size()];
	memset(p, 0, sizeof(p)*temp.size());
	while (1)
	{
		if (temp[0].length() == p[0])
			break;
		string tt="";
		for (int i = 0; i < temp.size(); i++)
		{
			tt += temp[i][p[i]];
		}
		store.push_back(tt);
		p[temp.size() - 1]++;
		for (int j = temp.size() - 1; j>0; j--)
		{
			if (temp[j].length() == p[j])
			{
				p[j - 1]++;
				p[j] = 0;
			}
			else
			{
				break;
			}
		}
	}
	return store;
}
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode *head = NULL;
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	if (l1->val>l2->val)
	{
		head = new ListNode(l2->val);
		l2 = l2->next;
	}
	else
	{
		head = new ListNode(l1->val);
		l1 = l1->next;
	}
	ListNode *p = head;
	while (l1 != NULL && l2 != NULL)
	{
		if (l1->val>l2->val)
		{
			p->next = new ListNode(l2->val);
			p = p->next;
			l2 = l2->next;
		}
		else
		{
			p->next = new ListNode(l1->val);
			p = p->next;
			l1 = l1->next;
		}
	}
	while (l1 != NULL)
	{
		p->next = new ListNode(l1->val);
		p = p->next;
		l1 = l1->next;
	}
	while (l2 != NULL)
	{
		p->next = new ListNode(l2->val);
		p = p->next;
		l2 = l2->next;
	}
	return head;
}
int main()
{
	//int ss = max(5,4);
	//int a = 2147483647;
	//int r=mySqrt(a);
	//string re=reverseString("hello");
	ListNode* l1 = new ListNode(2);
	ListNode* l2 = new ListNode(1);
	ListNode* out=mergeTwoLists(l1, l2);
	vector<string> a;
	string in = "23456789";
	a = letterCombinations(in);
	return 0;
}


