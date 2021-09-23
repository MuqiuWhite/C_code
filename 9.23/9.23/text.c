#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

void TestS1()
{
	SL s;
	Sinit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);

	SLPrintf(&s);
}

void TestS2()
{
	SL s;
	Sinit(&s);
	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPrintf(&s);

	SLPopBack(&s);
	SLPrintf(&s);

	SLPopFront(&s);
	SLPrintf(&s);

	SLInsert(&s, 1, 10);
	SLPrintf(&s);

	SLErase(&s, 1);
	SLPrintf(&s);

	SLDestory(&s);
}

void menu()
{
	printf("****************\n");
	printf("1.头插*********2.尾插*******\n");
	printf("3.头删*********4.尾删*******\n");
	printf("5.查找*********6.修改*******\n");
	printf("7.销毁*********8.打印*******\n");
	printf("0.退出****************\n");
	printf("****************\n");
	printf("输入：>\n");
	
}
int main()
{
	int input = 1; 
	int x = 0;
	SL s;
	//初始化
	void Sinit(SL * ps);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			//头插
			printf("插入，-1结束：\n");
			do
			{
				scanf("%d", &x);
				if (x == -1)
				{
					SLPushFront(&s, x);
				}
			} while (x!=-1);
			break;
			void SLPrintf(SL * ps);
			//尾插
			void SLPushBack(SL * ps, ST x);
			
			//尾删
			void SLPopBack(SL * ps);
			//头删
			void SLPopFront(SL * ps);
			//任意位置插入
			void SLInsert(SL * ps, int pos, ST x);
			//任意位置删除
			void SLErase(SL * ps, int pos);
			//销毁
			void SLDestory(SL * ps);
			//查找
			int SLFind(SL * ps, ST x);
			//修改
			void SLModify(SL * ps, int pos, ST x);
		default:
			printf("cxsr\n");
			break;

		}
	} while (input);
	return 0;
}

