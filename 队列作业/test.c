#include "Queue.h"

void test()
{
	Queue st;
	Init(&st);
	printf("�Ѿ���ʼ��\n");
	if (Empty(&st) == 1)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("����ǿ�\n");
	}
	QueuePush(&st, 'a');
	QueuePush(&st, 'b');
	QueuePush(&st, 'c');
	

	printf("������%c\n", QueueFront(&st));
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
