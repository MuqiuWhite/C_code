#include <stdio.h>

#define max 25
typedef struct list
{
	char a[max + 1];
	//char*a;
	int sz;
}list;

//����
typedef struct Chunk
{
	char ch[max];
	struct Chunk* next;
}Chunk;

typedef struct String
{
	Chunk* head, * tail;
	int len;
}String;

//BF�㷨
int BF(String s, String t)
{
	int i = 1, j = 1;
	while(i<=S.sz&&j<=T.length)
}