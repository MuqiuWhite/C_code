#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

void TestSlist1()
{
	SLTNode* plist = NULL;//第一个节点指针置为空
	SListPushBack(&plist, 1); //实参传递地址，改变形参才会改变实参
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SlistPrint(plist);

	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	////SListPopFront(&plist);
	//SlistPrint(plist);
	//
	//SListPopBack(&plist);
	//SlistPrint(plist);

	//在2前面插入20
	SLTNode* pos = SListFind(plist,2);
	if (pos)
	{
		SListInsert(&plist,pos,20);
	}
	SlistPrint(plist);	

	pos = SListFind(plist, 20);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SlistPrint(plist);
}

int main()
{
	TestSlist1();
	return 0;
}