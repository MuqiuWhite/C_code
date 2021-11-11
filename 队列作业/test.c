#include "Queue.h"

void test()
{
	Queue st;
	Init(&st);
	printf("已经初始化\n");
	if (Empty(&st) == 1)
	{
		printf("链表为空\n");
	}
	else
	{
		printf("链表非空\n");
	}
	QueuePush(&st, 'a');
	QueuePush(&st, 'b');
	QueuePush(&st, 'c');
	

	printf("出队列%c\n", QueueFront(&st));
	QueuePop(&st);
	QueuePush(&st, 'd');
	QueuePush(&st, 'e');
	QueuePush(&st, 'f');


	while (!Empty(&st))
	{
		printf("%c  ", QueueFront(&st));
		QueuePop(&st);
	}
	printf("\n");

	Destory(&st);
}

int main()
{

	test();
	return 0;
}
