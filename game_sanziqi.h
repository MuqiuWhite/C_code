#define row 3
#define col 3 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//��������
void InitBoard(char board[row][col],int r,int c); 
void DisplayBoard(char board[row][col],int r,int c);
void player(char board[row][col],int r,int c);
void Computer(char board[row][col],int r,int c);
//����״̬��
//���Ӯ�ˣ�*
//���ԣ�#
//ƽ�� P
//���� J

char Win(char board[row][col],int r,int c);
int Full(char board[row][col],int r,int c);

