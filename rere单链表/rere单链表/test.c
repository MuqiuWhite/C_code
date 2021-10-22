#include "SList.h"

void test()
{
	SL* phead = NULL;
	PushBack(&phead, 2);
	Print(phead);
	PushFront(&phead, 1);
	Print(phead);

	PopBack(&phead);
	Print(phead);

	PopFront(&phead);
	Print(phead);
	PushBack(&phead, 2);
	Print(phead);
	PushFront(&phead, 1);
	PushFront(&phead, 1);
	PushFront(&phead, 1);
	Print(phead);

	SL* pos1 = Find(phead, 1);
	while (pos1)
	{
		printf("%d\n", pos1->data);
		
		pos1 = Find(pos1->next, 1);
		
	}
	pos1 = Find(phead, 2);
	if (pos1)
	{
		pos1->data = 20;
	}
	Print(phead);

	Insert(&phead, pos1, 10);
	Print(phead);

	Erase(&phead, pos1);
	Print(phead);
}
int main()
{

	test();
	return 0;
}