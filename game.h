//º¯ÊıÉùÃ÷
#include <stdio.h> 
#define row 9
#define col 9
#define cols col+2
#define rows row+2
#define COUNT 80
#include <time.h>
#include <stdlib.h>

void InitBoard( char board[rows][cols],int rs,int cs,char set); 
void Display(char board[rows][cols],int r,int c );
void SetMine(char board[rows][cols],int r,int c);
void FindMine(char mine[rows][cols],char show[rows][cols],int r,int c);


