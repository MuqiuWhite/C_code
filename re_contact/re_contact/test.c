#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("\n*************************************\n");
	printf("*******    1.add    2. del    *******\n");
	printf("***********3.serch  4.mod   *********\n");
	printf("******     5.show  6.sort   *********\n");
	printf("***********0.exit  ******************\n");
	printf("*************************************\n");	
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MOD,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	Contact con;
	//初始化
	init_con(&con);
	do
	{
		menu();
		printf("\n选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_con(&con);
			break;
		case DEL:

			break;
		case SHOW:
			show_con(&con);
			break;
		case SORT:

			break;
		case EXIT:
			printf("退出\n");
			break;
		default:
			printf("错误\n");
			break;
		}
	} while (input);
	return 0;
}