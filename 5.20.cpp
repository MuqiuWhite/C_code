#include <stdio.h>
#include <stddef.h>
//enum sex
//{	//ȡֵ 
//	nal,
//	ma,
//	se,
//};
//enum color
//{
//	red=5,
//	yellow=2,
//	blue=0,
//};

//	enum sex s=ma;
//	enum color c=red;
//	printf("%d %d %d",red,yellow,blue);

struct c
{
	int b:2;
	int a:5;
	int v:10; 
}; 


 
int main()
{
	struct c s={0};
//	it(&s);
//	s.c="5";
//	s.a=2;
//	s.v="0";
//	printf("%d %d %s ",s.b,s.a,s.v);
	printf("%d ",sizeof(s));
	return 0;
}
