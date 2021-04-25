#define row 3
#define col 3 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//函数声明
void InitBoard(char board[row][col],int r,int c); 
void DisplayBoard(char board[row][col],int r,int c);
void player(char board[row][col],int r,int c);
void Computer(char board[row][col],int r,int c);
//四种状态：
//玩家赢了：*
//电脑：#
//平局 P
//继续 J

char Win(char board[row][col],int r,int c);
int Full(char board[row][col],int r,int c);

