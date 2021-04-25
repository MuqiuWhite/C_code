//ʵ��
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
	//��ӡ�к�
	for(i=0;i<=r;i++)
	{
		printf("%d ",i);
	}printf("\n");
	for(i=1;i<=r;i++)
	{	//��ӡ�к�
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
		int x=rand()%row+1;//�κ�����9ȡģ������Ϊ0~8 
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

int GetMine(char mine[rows][cols],int x,int y)//������Χ���� 
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
while(win<r*c-COUNT)//9*9-�׵ĸ���=������	
{
	printf("����������\n");
	scanf("%d%d",&x,&y);	
	if(x>0&&x<=row&&y>0&&y<=col)
	{
		//����Ϸ�
		if(mine[x][y]=='1')//���� 
		{
			printf("�㱻ը����\n");
			Display(show,row,col);
			break;
		}
		else//������ 
		{
			//������Χ�˸������׵ĸ��� 
			int get=GetMine(mine,x,y);
			show[x][y]=get+'0';
			Display(show,r,c);
			win++;//�����׵ĸ��� 
		}	
	} 
	else
	{
		printf("����Ƿ�\n"); 
	}
	
	}
}
	if(win==r*c-COUNT)
		printf("��Ү��Ӯ��\n");
		Display(mine,row,col);
	
}

