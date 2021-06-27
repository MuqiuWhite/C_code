#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("**************************\n");
	printf("**********猜数字**********\n");
	printf("***0.exit********1.play***\n");
	printf("**************************\n");

}

void play()
{
	int key = rand() % 100 + 1;//每开始一次游戏就重新产生一个随机数
	int a = 0;
	while (1)
	{
		printf("请输入数字\n");
		scanf("%d", &a);
		if (a == key)
		{
			printf("猜对了\n");
			break;
		}
		else if(a>key)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));//随机数生成起点，只生成一次
	int i = 1;
	do
	{
		menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("开始游戏\n");
			play();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (i);

	return 0;
}