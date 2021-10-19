#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void test1()
{
	SL ps;
	Init(&ps);
	
	Print(&ps);
	//Í·²å
	PushFront(&ps, 1);
	Print(&ps);
	//Î²²å
	PushBack(&ps, 2);
	Print(&ps);
	//Í·É¾
	PopFront(&ps);
	Print(&ps);

	PopBack(&ps);
	Print(&ps);

	PushFront(&ps, 1);
	Print(&ps);
	//Î²²å
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

