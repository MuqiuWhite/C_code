#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

void TestSlist1()
{
	SLTNode* plist = NULL;//��һ���ڵ�ָ����Ϊ��
	SListPushBack(&plist, 1); //ʵ�δ��ݵ�ַ���ı��ββŻ�ı�ʵ��
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