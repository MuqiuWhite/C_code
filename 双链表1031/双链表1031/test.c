#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void  Test1()
{
	LTNode* phead = Init();

	//β��
	PushBack(phead, 1);
	PushBack(phead, 2);
	Print(phead);

	PushFront(phead, 0);
	PushFront(phead, -1);
	Print(phead);

	PopFront(phead);
	Print(phead);

	PopBack(phead);
	Print(phead);

	LTNode* pos = Find(phead, 1);
	if (pos)
	{
		//���Ҹ����޸ĵ�����
		pos->data *= 10;
		printf("yes���޸ģ�����10\n");
		Print(phead);
	}
	else
	{
		printf("NO\n");
	}

	// ��10ǰ��
	Insert(pos, 20);
	Print(phead);

	//ɾ��10
	Erase(pos);
	Print(phead);

	Des(phead);
	phead = NULL;


}


int main()
{
	Test1();
	return 0;
}