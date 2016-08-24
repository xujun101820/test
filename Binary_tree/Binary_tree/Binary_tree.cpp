// Binary_tree.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include<iostream>
using namespace std;

typedef struct node
{
	struct node *leftChild;
	struct node *rightChild;
	char data;
}BiTreeNode, *BiTree;

void createBiTree(BiTree &T)
{
	char c;
	cin >> c;
	if ('#' == c)
		T = NULL;
	else
	{
		T = new BiTreeNode;
		T->data = c;
		createBiTree(T->leftChild);
		createBiTree(T->rightChild);
	}
}
struct Node_num
{
	int a;
	Node_num * next;
};
struct Node_name
{
	string  a;
	Node_num * next;
};
//ǰ�����
void preRead(BiTree &T)
{
	if (T!=NULL)
	{
		preRead(T->leftChild);
		cout << T->data << endl;
		preRead(T->rightChild);
	}
}
int main()
{
	BiTree T;
	createBiTree(T);
	preRead(T);
	return 0;
}



