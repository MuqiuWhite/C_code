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
	printf("*******    1.ͷ��    2. β��    ****************\n");
	printf("*******    3.ͷɾ    4.βɾ   ******************\n");
	printf("******5.����ڵ���� 6.����ڵ�ɾ��   **********\n");
	printf("***********7.����ĳԪ�ص�λ��     **************\n");
	printf("***********8.���    9.����   ******************\n");
	printf("***********10.����ĳλ�õ�Ԫ��   11.����    ****\n");
	printf("*********** 12.�Ƿ�Ϊ��         0.�˳� *********\n");
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
		printf("\n������\n");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�����˳�\n");
			break;
		case PUSHFRONT:
			printf("������Ҫ���������:>\n");
			getchar();
			scanf("%c", &x);
			PushFront(&s, x);
			break;
		case PUSHBACK:
			printf("������Ҫ���������:>\n");
			getchar();
			scanf("%c", &x);
			PushBack(&s, x);
			break;
		case POPFRONT:
			printf("����ɾ����һ������\n");
			PopFront(&s);
			break;
		case POPBACK:
			printf("����ɾ�����һ������\n");
			PopBack(&s);
			break;
		case INSERT:
			printf("������Ҫ�����λ��:>\n");
			scanf("%d", &n);

			printf("������Ҫ���������:>\n");
			getchar();
			scanf("%c", &x);
			insert(&s, n - 1, x);
			break;
		case DEL:
			printf("������Ҫɾ����λ��:>\n");
			scanf("%d", &n);
			del(&s, n - 1);
			break;
		case SER_N:
			printf("������Ҫ���ҵ�����:>\n");
			getchar();
			scanf("%c", &x);
			int a = ser_n(s, x);
			if (a != -1)
			{
				printf("%c��%d\n", x, a + 1);
			}
			else
			{
				printf("�Ҳ���\n");
			}
			break;
		case SER_X:
			printf("������Ҫ���ҵ�����:>\n");

			scanf("%d", &n);
			ser_x(s, n - 1);
			break;
		case PRINTF:
			print(s);
			break;
		case DESTORY:
			printf("��������\n");
			destory(&s);
			break;
		case SIZE:
			printf("��ǰ����Ϊ%d\n", size(s));
			break;
		case IS:
				IsEmpty(s);
				break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}