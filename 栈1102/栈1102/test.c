#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void test()
{
	ST st;
	printf("初始化\n");
	Init(&st);
	Push(&st, 1);
	Push(&st, 2);
	Push(&st, 3);
	Push(&st,4);
	Push(&st, 5);


	if (Empty(&st) == 1)
	{
		printf("空链表\n");
	}
	else
	{
		printf("非空链表\n");
	}


	//不能随便遍历，要保证从栈顶出进
	while (!Empty(&st))
	{
		printf("%d  ", Top(&st));
		Pop(&st);
	}
	printf("\n");

	Destory(&st);
	printf("已释放\n");
}

int main()
{

	test();
	return 0;
}