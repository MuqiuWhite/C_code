#include "Stack.h"
void test()
{
	ST st;
	printf("初始化\n");
	Init(&st);
	Push(&st, 'a');
	Push(&st, 'b');
	Push(&st, 'c');
	Push(&st, 'd');
	Push(&st, 'e');
	
	
	if (Empty(&st)==1)
	{
		printf("空链表\n");
	}
	else
	{
		printf("非空链表\n");
	}

	
	
	while(!Empty(&st))
	{
		printf("%c  ", Top(&st));
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

