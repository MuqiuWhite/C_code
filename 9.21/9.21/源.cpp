#define _CRT_SECURE_NO_WARNINGS 1
#pragma pack(1)
#include <stdio.h>
struct s 
{
	int a[10];
	char b[20];
}tmp;
void p(struct s tmp)
{
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", tmp.a[i]);
	}
}
void p(struct s *tmp)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tmp->a[i]);
	}
}
enum c
{
	r=2,
	b,
	g
};

union un
{
	char e;
	int i;
};
int main()
{
	enum c a = g;
	printf("%d %d %d ", r, b, g);
	union un u = { 0 };
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("Ð¡¶Ë\n");
	else
		printf("´ó¶Ë\n");


	return 0;
}