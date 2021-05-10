#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void * malloc(unsigned size)
//{
//	return 0;
//}
int main()
{
//	char a[100]="0";
//	char *p=a;
//	int i;
//	gets(p);
//	
//	for(i=0;*(p+i)!='\0';i++)
//	{
//		if(p[i]>='a'&&p[i]<='z')
//			printf("%c",(*(p+i))-32);
//		else
//			printf("%c",*(p+i));	
//	}
//	char a[100]="0";
//	char *p=a;
//	int count=0,i=0;
//	gets(p);
//	for(i=0;p[i]!='\0';i++)
//	{
//		if(p[i]>='A'&&p[i]<='Z')
//			count++;		
//	}
//	printf("%d",count);
//	char a[20];
//	char *p;
//	p=a;
//	*p='A';
//	*a='A';
//	strcpy(a,"abcd");
//	strcpy(p,"abcd");
//	gets(a);
//	gets(p);
//	p++; 
//	int a[10]={0,11,22,33,44,55},*p;
//	p=a;
//	printf("%d,%d\n",*(p+1),p[1]);
//	p=&a[3];
//	printf("%d,%d\n",*(p+1),p[1]);
//	char a[]="abcd",*p=a;
//	while(*p)puts(p++);
//	int *p,*q;
//	p=q=(int *)malloc(10*sizeof(int));
//	int i;for(i=0;i<10;i++);

//	int *p;
//	p=(int *)calloc(1o,sizeof(int));

//	int a[10]={0,1,2,3,4,5,6,7,8,9},*p,i;
//	p=(int *)malloc(10*sizeof(int));
//	for(i=0;i<10;i++)
//	{
//		p[i]=a[i];
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}	
//free(p);

//	int (*p)[3];
	int a[2][3]={0,1,2,3,4,5},i,j;
//	int (*p)[3]=a;
	int *p;
	for(i=0;i<3;i++)
		printf("%4d",*(a[0]+i));
	printf("\n");
	p=a[0];
	for(j=0;j<3;j++)
		printf("%4d",*p++);
	printf("\n");
    
return 0;		
} 
