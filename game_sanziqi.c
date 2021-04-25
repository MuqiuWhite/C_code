#include "game.h"

void InitBoard(char board[row][col],int r,int c)
{
	int i=0,j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			board[i][j]=' ';
		}
	}
}

void DisplayBoard(char board[row][col],int r,int c)
{
	int i=0,j;
	for(i;i<r;i++)
	{	//打印一行的数据 
		for(j=0;j<c;j++)
		{ 
		printf(" %c ",board[i][j]);
		if (j<c-1)
			printf("|");
		}
		printf("\n");
		//打印分隔行 
		if(i<r-1)	
		{
			for(j=0;j<c;j++)
			{
				printf("---");
				if(j<c-1)
					printf("|");
			}
		printf("\n");
		}
		
		
	}
}


void player(char board[row][col],int r,int c)
{	int x,y;
	while(1)
	{
		printf("请输入坐标\n");	
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;}
			else
				printf("已被占用\n");
		}
		else
		{
			printf("不对，请重新输入"); 
		}
		
	}
}

void Computer(char board[row][col],int r,int c)
{
	int x=0;
	int y=0;
	printf("电脑走\n");
	while(1)
	{
		x=rand()%r; //得出0~2 
		y=rand()%c;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}


char Win(char board[row][col],int r,int c)
{	
	int i=0;
	//每一行是否有相等的 
	for(i=0;i<r;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
			return board[i][0];	
	} 	
	//每一列是否有相等的	
	for(i=0;i<c;i++)
	{
		if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[0][i]!=' ')	
			return board[0][i];
	} 	
	//两条对角线 
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{	return board[1][1];} 
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
	{	return board[1][1];} 
	//判断平局
	if(1==Full(board,row,col))
	{	return 'P';} 
	return 'J';
}

int Full(char board[row][col],int r,int c)
{	int i=0,j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(board[i][j]==' ')
				return 0;//棋盘没满 
		}
	}
	return 1; //棋盘满了 
	
}
