#include "Queue.h"
void test()
{
	Queue st;
	Init(&st);
	printf("�Ѿ���ʼ��\n");
	//if (Empty(&st) == 1)
	//{
	//	printf("����Ϊ��\n");
	//}
	//else
	//{
	//	printf("����ǿ�\n");
	//}
	QueuePush(&st, 1);
	QueuePush(&st, 2);
	QueuePush(&st, 3);

	//	QueuePop(&st);
//	printf("������%c\n  ", QueueFront(&st));
//
//	QueuePush(&st, 'd');
//	QueuePush(&st, 'e');
//	QueuePush(&st, 'f');
//	//������������Ҫ��֤��ջ������
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
