#define _CRT_SECURE_NO_WARNINGS 1
#include "s.h"

//void test()
//{
//	SL* head = NULL;
//	PushFront(&head, 'a');
//	PushFront(&head, 'b');
//	print(head);
//
//	PushBack(&head, 'c');
//	PushBack(&head, 'd');
//	print(head);
//
//	//PopFront(&head);
//	//print(head);
//
//	//PopBack(&head);
//	//print(head);
//
//	insert(&head, 2, 'f');
//	print(head);
//
//	int a=ser_n(&head, 'a');
//	print(head);
//}

void menu()
{
	printf("\n**********************************************\n");
	printf("*******    1.头插    2. 尾插    ****************\n");
	printf("*******    3.头删    4.尾删   ******************\n");
	printf("******5.任意节点插入 6.任意节点删除   **********\n");
	printf("***********7.查找某元素的位置     **************\n");
	printf("***********8.输出    9.长度   ******************\n");
	printf("***********10.查找某位置的元素   11.销毁    ****\n");
	printf("*********** 12.是否为空         0.退出 *********\n");
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
	SER_N,
	PRINTF,
	SIZE,
	SER_X,
	DESTORY,
	IS
};

int main()
{
	//test1();
	int input = 0;
	SL *s=NULL;
	init(s);
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
			PushFront(&s, x);
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
			insert(&s, n - 1, x);
			break;
		case DEL:
			printf("请输入要删除的位置:>\n");
			scanf("%d", &n);
			del(&s, n - 1);
			break;
		case SER_N:
			printf("请输入要查找的数据:>\n");
			getchar();
			scanf("%c", &x);
			int a = ser_n(s, x);
			if (a != -1)
			{
				printf("%c在%d\n", x, a + 1);
			}
			else
			{
				printf("找不到\n");
			}
			break;
		case SER_X:
			printf("请输入要查找的数据:>\n");

			scanf("%d", &n);
			ser_x(s, n - 1);
			break;
		case PRINTF:
			print(s);
			break;
		case DESTORY:
			printf("即将销毁\n");
			destory(&s);
			break;
		case SIZE:
			printf("当前长度为%d\n", size(s));
			break;
		case IS:
				IsEmpty(s);
				break;
		default:
			printf("输入有误\n");
			break;
		}
	} while (input);
	return 0;
}