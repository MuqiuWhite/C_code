#include "Stack.h"
void test()
{
	ST st;
	printf("��ʼ��\n");
	Init(&st);
	Push(&st, 'a');
	Push(&st, 'b');
	Push(&st, 'c');
	Push(&st, 'd');
	Push(&st, 'e');
	
	
	if (Empty(&st)==1)
	{
		printf("������\n");
	}
	else
	{
		printf("�ǿ�����\n");
	}

	
	
	while(!Empty(&st))
	{
		printf("%c  ", Top(&st));
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

