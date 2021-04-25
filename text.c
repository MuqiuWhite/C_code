//测试
#include "game.h"
void menu()
{
	printf("***1.开始  0.结束***\n"); 
}

void game()
{
	printf("扫雷\n");
	//存放信息
	//1.布置好雷的信息 
	char mine[rows][cols]={0};
	
	//2.排查出雷 
	char show[rows][cols]={0};
	//初始化 
	InitBoard(mine,rows,cols,'0');
	InitBoard(show,rows,cols,'*');
	//打印棋盘
//	Display(mine,row,col);
	Display(show,row,col);
	//布置雷
	SetMine(mine,row,col); 
	//扫雷
	Display(mine,row,col);	 
	FindMine(mine,show,row,col);
	//展开非雷区域,坐标不是雷且周围八个数也不是雷 
//	NotCount(mine,row,col); 
		 
	 
}
void test()
{	
	srand((unsigned int)time(NULL));
	int a;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&a);
		switch(a)
		{
		case 1: 
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("无效，请重新输入\n");
			break;
		}
	}while(a);
}

int main()
{
	test();
return 0;	
} 
