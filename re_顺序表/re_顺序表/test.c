#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void test1()
{
	SL ps;
	Init(&ps);
	
	Print(&ps);
	//ͷ��
	PushFront(&ps, 1);
	Print(&ps);
	//β��
	PushBack(&ps, 2);
	Print(&ps);
	//ͷɾ
	PopFront(&ps);
	Print(&ps);

	PopBack(&ps);
	Print(&ps);

	PushFront(&ps, 1);
	Print(&ps);
	//β��
	PushBack(&ps, 2);
	Print(&ps);

	Insert(&ps, 2, 3);
	Print(&ps);

	Erase(&ps, 2);
	Print(&ps);
}

int main()
{
	test1();
	return 0;

}

