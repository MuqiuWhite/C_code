//����
#include "game.h"
void menu()
{
	printf("***1.��ʼ  0.����***\n"); 
}

void game()
{
	printf("ɨ��\n");
	//�����Ϣ
	//1.���ú��׵���Ϣ 
	char mine[rows][cols]={0};
	
	//2.�Ų���� 
	char show[rows][cols]={0};
	//��ʼ�� 
	InitBoard(mine,rows,cols,'0');
	InitBoard(show,rows,cols,'*');
	//��ӡ����
//	Display(mine,row,col);
	Display(show,row,col);
	//������
	SetMine(mine,row,col); 
	//ɨ��
	Display(mine,row,col);	 
	FindMine(mine,show,row,col);
	//չ����������,���겻��������Χ�˸���Ҳ������ 
//	NotCount(mine,row,col); 
		 
	 
}
void test()
{	
	srand((unsigned int)time(NULL));
	int a;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d",&a);
		switch(a)
		{
		case 1: 
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Ч������������\n");
			break;
		}
	}while(a);
}

int main()
{
	test();
return 0;	
} 
