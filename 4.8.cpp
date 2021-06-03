#include <stdio.h>
int main()
{	
	int a=0 ,b=1;
	while(b<=100)
	{
	a=a+b;
	b++;}
//	for(b=1;b<=100;b++)
//	a+=b;
//	do
//	{
//		a+=b;
//		b++; 
//	}while(b<=100);
	printf("%d\t",a);
	return 0;
}
