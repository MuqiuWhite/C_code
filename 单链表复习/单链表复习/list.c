#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void test()
{
	ST* phead = NULL;
	PushFront(&phead, 1);
	PushFront(&phead, 2);
	PushFront(&phead, 3);
	PushFront(&phead, 4);
	PushFront(&phead, 5);
	Print(phead);

	PushBack(&phead, 6);
	Print(phead);

	ST* n = Find(phead, 2);
	Insert(&phead, n, 20);
	Print(phead);

	n = Find(phead, 2);
	Erase(&phead, n);
	Print(phead);

	

	PopBack(&phead);
	Print(phead);

	PopFront(&phead);
	PopFront(&phead);
	Print(phead);

	Des(&phead);

}

int main()
{
	test();
	return 0;

}