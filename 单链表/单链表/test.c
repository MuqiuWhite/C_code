#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

void TestSlist1()
{
	SLTNode* plist = NULL;//第一个节点指针置为空
	SListPushBack(&plist, 1); //实参传递地址，改变形参才会改变实参
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SlistPrint(plist);
}

int main()
{
	TestSlist1();
	return 0;
}