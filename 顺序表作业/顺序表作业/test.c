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

	//�޸�
	mod(&s, 2,'l');
	print_list(&s);

	destory(&s);
	print_list(&s);
}

void menu()
{
	printf("\n**********************************************\n");
	printf("*******    1.ͷ��    2. β��    ****************\n");
	printf("*******    3.ͷɾ    4.βɾ   ******************\n");
	printf("******5.����ڵ���� 6.����ڵ�ɾ��   **********\n");
	printf("***********7.����ĳԪ�ص�λ��    8.�޸�  *******\n");
	printf("***********9.���    10.����  ******************\n");
	printf("***********11.����ĳλ�õ�Ԫ��   12.����    ****\n");
	printf("***********          0.�˳�      ***************\n");
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
			PushFront(&s,x);
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
			insert(&s, n-1, x);
			break;
		case DEL:
			printf("������Ҫɾ����λ��:>\n");	
			scanf("%d", &n);
			del(&s, n-1);
			break;
		case SER:
			printf("������Ҫ���ҵ�����:>\n");
			getchar();
			scanf("%c", &x);
			int a = ser(&s, x);
			if (a != -1)
			{
				printf("%c��%d\n",x, a+1);
			}
			else
			{
				printf("�Ҳ���\n");
			}
			break;
		case SER_POS:
			printf("������Ҫ���ҵ�����:>\n");
			
			scanf("%d", &n);
			ser_pos(&s, n-1);			
			break;
		case MOD:
			printf("������Ҫ�޸ĵ�λ��:>\n");
			scanf("%d", &n);
			printf("������Ҫ�޸ĵ�����:>\n");
			getchar();
			scanf("%c", &x);
			mod(&s, n-1, x);
			break;
		case PRINTF:
			print_list(&s);
			break;
		case DESTORY:
			printf("��������\n");
			destory(&s);
			break;
		case SIZE:
			printf("��ǰ����Ϊ%d\n",Size(&s));
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}