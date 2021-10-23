#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void test1()
{
	SL s;
	Init(&s);
	PushBack(&s, 1);
	PushBack(&s, 2);
	Print(&s);

	PushFront(&s, 0);
	PushFront(&s, -1);
	Print(&s);

	PopBack(&s);
	Print(&s);

	PopFront(&s);
	Print(&s);

	Insert(&s, 1, 20);
	Print(&s);

	Erase(&s, 1);
	Print(&s);

	Des(&s);
}

int main()
{
	test1();
	return 0;
}