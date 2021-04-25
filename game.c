//实现
#include "game.h" 
void InitBoard ( char board[rows][cols],int rs,int cs,char set)
{	int i,j;
	for(i=0;i<rs;i++)
	{	for(j=0;j<cs;j++)
		{
			board[i][j]=set;
		}		
	}	
} 
void Display(char board[rows][cols],int r,int c )
{
	int i,j;
	//打印列号
	for(i=0;i<=r;i++)
	{
		printf("%d ",i);
	}printf("\n");
	for(i=1;i<=r;i++)
	{	//打印行号
		printf("%d ",i);
		
		for(j=1;j<=c;j++)
		{
			printf("%c ",board[i][j]);
		}
	printf("\n");
	}
}

void SetMine(char board[rows][cols],int r,int c)
{
	int count=COUNT;
	while(count)
	{	
		int x=rand()%row+1;//任何数对9取模，得数为0~8 
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

int GetMine(char mine[rows][cols],int x,int y)//计算周围的雷 
{//	'1'-'0'=1
//	'0'-'0'=0
//	'3'-'0'=3 
	return mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+
	mine[x-1][y]  +mine[x+1][y]+
	mine[x+1][y+1]+mine[x][y+1]+mine[x+1][y+1] - 8*'0';
}

void FindMine(char mine[rows][cols],char show[rows][cols],int r,int c)
{	
	int x,y,win=0;
	while(1)
	{
while(win<r*c-COUNT)//9*9-雷的个数=非雷数	
{
	printf("请输入坐标\n");
	scanf("%d%d",&x,&y);	
	if(x>0&&x<=row&&y>0&&y<=col)
	{
		//坐标合法
		if(mine[x][y]=='1')//踩雷 
		{
			printf("你被炸死了\n");
			Display(show,row,col);
			break;
		}
		else//不是雷 
		{
			//计算周围八个数的雷的个数 
			int get=GetMine(mine,x,y);
			show[x][y]=get+'0';
			Display(show,r,c);
			win++;//不是雷的个数 
		}	
	} 
	else
	{
		printf("坐标非法\n"); 
	}
	
	}
}
	if(win==r*c-COUNT)
		printf("好耶！赢了\n");
		Display(mine,row,col);
	
}

