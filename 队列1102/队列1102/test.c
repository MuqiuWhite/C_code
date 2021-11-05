#include "Queue.h"
void test()
{
	Queue st;
	Init(&st);
	printf("已经初始化\n");
	//if (Empty(&st) == 1)
	//{
	//	printf("链表为空\n");
	//}
	//else
	//{
	//	printf("链表非空\n");
	//}
	QueuePush(&st, 1);
	QueuePush(&st, 2);
	QueuePush(&st, 3);

	//	QueuePop(&st);
//	printf("出队列%c\n  ", QueueFront(&st));
//
//	QueuePush(&st, 'd');
//	QueuePush(&st, 'e');
//	QueuePush(&st, 'f');
//	//不能随便遍历，要保证从栈顶出进
//
	while (!Empty(&st))
	{
		printf("%d  ", QueueFront(&st));
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
