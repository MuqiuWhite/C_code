#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void test()
{
	SL* phead=NULL;
	Print(phead);
	
	
	PushFront(&phead, 1);
	PushFront(&phead, 2);
	PushFront(&phead, 3);
	PushFront(&phead, 4);
	PushFront(&phead, 5);

	Print(phead);

	SL*n= Find(phead, 2);
	Insert(&phead, n, 20);
	Print(phead);

	PopFront(&phead);
	PopFront(&phead);
	Print(phead);

	n = Find(phead, 2);
	Erase(&phead,n);
	Print(phead);

	PushBack(&phead,6);
	Print(phead);

	PopBack(&phead);
	Print(phead);

	Destory(&phead);
}
int main()
{
	test();
}