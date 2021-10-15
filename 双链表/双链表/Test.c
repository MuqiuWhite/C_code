#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"
void  Test1()
{
	ListNode* phead = ListInit();

	//β��
	ListPushBack(phead,1);
	ListPushBack(phead,2);
	ListPrint(phead);

	ListPushFront(phead, 0);
	ListPushFront(phead, -1);
	ListPrint(phead);

	ListPopFront(phead);
	ListPrint(phead);

	ListPopBack(phead);
	ListPrint(phead);

	ListNode* pos = ListFind(phead, 1);
	if (pos)
	{
		//���Ҹ����޸ĵ�����
		pos->data *= 10;
		printf("yes���޸ģ�����10\n");
		ListPrint(phead);
	}
	else
	{
		printf("NO\n");
	}

	// ��10ǰ��
	ListInsert(pos, 20);
	ListPrint(phead);

	//ɾ��10
	ListErase(pos);
	ListPrint(phead);

	ListDestory(phead);
	
	                       
}


int main()
{
	Test1();
	return 0;
}
