#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void test()
{
	ST st;
	printf("��ʼ��\n");
	Init(&st);
	Push(&st, 1);
	Push(&st, 2);
	Push(&st, 3);
	Push(&st,4);
	Push(&st, 5);


	if (Empty(&st) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("�ǿ�����\n");
	}


	//������������Ҫ��֤��ջ������
	while (!Empty(&st))
	{
		printf("%d  ", Top(&st));
		Pop(&st);
	}
	printf("\n");

	Destory(&st);
	printf("���ͷ�\n");
}

int main()
{

	test();
	return 0;
}