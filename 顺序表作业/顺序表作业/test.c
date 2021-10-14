#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void test1()
{
	SList s;
	init_list(&s);
	PushFront(&s, 'a');
	PushFront(&s, 'b');
	PushFront(&s, 'c');
	PushFront(&s, 'd');
	PushFront(&s, 'e');	
	print_list(&s);

	PushBack(&s, 'f');
	print_list(&s);

	PopFront(&s);
	print_list(&s);

	PopBack(&s);
	print_list(&s);

	insert(&s, 3, 'f');
	print_list(&s);

	del(&s, 3);
	print_list(&s);

	printf("%d\n", ser(&s, 'c'));

	//修改
	mod(&s, 2,'l');
	print_list(&s);

	destory(&s);
	print_list(&s);
}

void menu()
{
	printf("\n**********************************************\n");
	printf("*******    1.头插    2. 尾插    ****************\n");
	printf("*******    3.头删    4.尾删   ******************\n");
	printf("******5.任意节点插入 6.任意节点删除   **********\n");
	printf("***********7.查找某元素的位置    8.修改  *******\n");
	printf("***********9.输出    10.长度  ******************\n");
	printf("***********11.查找某位置的元素   12.销毁    ****\n");
	printf("***********          0.退出      ***************\n");
}
enum option
{
	EXIT,
	PUSHFRONT,
	PUSHBACK,
	POPFRONT,
	POPBACK,
	INSERT,
	DEL,
	SER,
	MOD,
	PRINTF,
	SIZE,
	SER_POS,
	DESTORY
};

int main()
{
	//test1();
	int input = 0;
	SList s;
	init_list(&s);
	do 
	{
		menu();
		char x;
		int n = 0;
		printf("\n请输入\n");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("即将退出\n");
			break;
		case PUSHFRONT:
			printf("请输入要插入的数据:>\n");
			getchar();
			scanf("%c", &x);
			PushFront(&s,x);
			break;
		case PUSHBACK:
			printf("请输入要插入的数据:>\n");
			getchar();
			scanf("%c", &x);
			PushBack(&s, x);
			break;
		case POPFRONT:
			printf("即将删除第一个数据\n");
			PopFront(&s);
			break;
		case POPBACK:
			printf("即将删除最后一个数据\n");
			PopBack(&s);
			break;
		case INSERT:
			printf("请输入要插入的位置:>\n");
			scanf("%d", &n);
			
			printf("请输入要插入的数据:>\n");
			getchar();
			scanf("%c", &x);
			insert(&s, n-1, x);
			break;
		case DEL:
			printf("请输入要删除的位置:>\n");	
			scanf("%d", &n);
			del(&s, n-1);
			break;
		case SER:
			printf("请输入要查找的数据:>\n");
			getchar();
			scanf("%c", &x);
			int a = ser(&s, x);
			if (a != -1)
			{
				printf("%c在%d\n",x, a+1);
			}
			else
			{
				printf("找不到\n");
			}
			break;
		case SER_POS:
			printf("请输入要查找的数据:>\n");
			
			scanf("%d", &n);
			ser_pos(&s, n-1);			
			break;
		case MOD:
			printf("请输入要修改的位置:>\n");
			scanf("%d", &n);
			printf("请输入要修改的数据:>\n");
			getchar();
			scanf("%c", &x);
			mod(&s, n-1, x);
			break;
		case PRINTF:
			print_list(&s);
			break;
		case DESTORY:
			printf("即将销毁\n");
			destory(&s);
			break;
		case SIZE:
			printf("当前长度为%d\n",Size(&s));
			break;
		default:
			printf("输入有误\n");
			break;
		}
	} while (input);
	return 0;
}