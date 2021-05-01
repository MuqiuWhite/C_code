#include <stdio.h>
//void inc(int *x)
//{
//		(*x)++;
//}

//int print(int x)
//{
//	if(x>9)
//		print(x/10);
//	printf("%d  ",x%10);
//}

//int sz(char* p)
//{	int count=0;
//	while(*p!='\0')
//	{
//		count++;
//		p++; 
//	}
//	return count;
//}
int sz(char* p)
{
	if(*p!=0)
		return 1+sz(p+1);
	else
		return 0;
}
int main()
{
//	int num=0;
//	inc(&num);
//	printf("%d",num);
//		inc(&num);
//	printf("%d",num);
//		inc(&num);
//	printf("%d",num);

	char a[]="hello";
	int len=sz(a);
	printf("%d ",len);
	
return 0;	
} 
