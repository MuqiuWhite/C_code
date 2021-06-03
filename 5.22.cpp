#include <stdio.h> 
//enum aini
//{
//	ni,
//	wo,
//	ta,
//};
//union y
//{
//	char c;
//	int i;
//};
//int check ()
union wo
{
//	int a=1;
//	if( 1==*(char*)(&a))
//		return 1;
//	else
//		return 0;

	int a;
	char b[5];
};
int main ()
{
//	check();
//	if(check()==1)
//		printf("Ð¡¶Ë");
//	else
//		printf("´ó¶Ë");
//	enum aini a=ni;
//	union y yo;
//	printf("%d ",sizeof(yo));
//	printf("%p ",&(yo.c));
//	printf("%p ",&yo);
	union wo q;
	printf("%d",sizeof(q));
return 0;
}
