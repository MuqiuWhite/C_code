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
	printf("1.ͷ��*********2.β��*******\n");
	printf("3.ͷɾ*********4.βɾ*******\n");
	printf("5.����*********6.�޸�*******\n");
	printf("7.����*********8.��ӡ*******\n");
	printf("0.�˳�****************\n");
	printf("****************\n");
	printf("���룺>\n");
	
}
int main()
{
	int input = 1; 
	int x = 0;
	SL s;
	//��ʼ��
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
			//ͷ��
			printf("���룬-1������\n");
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
			//β��
			void SLPushBack(SL * ps, ST x);
			
			//βɾ
			void SLPopBack(SL * ps);
			//ͷɾ
			void SLPopFront(SL * ps);
			//����λ�ò���
			void SLInsert(SL * ps, int pos, ST x);
			//����λ��ɾ��
			void SLErase(SL * ps, int pos);
			//����
			void SLDestory(SL * ps);
			//����
			int SLFind(SL * ps, ST x);
			//�޸�
			void SLModify(SL * ps, int pos, ST x);
		default:
			printf("cxsr\n");
			break;

		}
	} while (input);
	return 0;
}

