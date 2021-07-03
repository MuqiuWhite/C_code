
//print(int a[2][5],int x,int y)
//{
//	int i,j;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf();
//		}
//	}
//}
//
//print2(int (*p)[5],int x,int y)


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char a[1000];
	int i;
	int count;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(n--)
		{
			count=0;
			gets(a);			
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]>='0'&&a[i]<='9')
					count++;
			}
			printf("%d\n",count);
		}
	}
	
	return 0;
 } 
 
//int n,min=0;
//	int a[100];
//	int i;
//	while(scanf("%d",&n)!=EOF)
//	{		
//		if(n==0)
//			break;
//		for(i=0;i<n;i++)
//		{
//			scanf("%d",&a[i]);			
//		}
//		min=0;//下标 
//		int flag=0;
//		for(i=0;i<n;i++)
//		{
//			if(a[i]<a[min])
//			{
//				min=i;//min(下标)=当前的 i 
//			}
//		}
//		flag=a[min];
//		a[min]=a[0];
//		a[0]=flag;
//		for(i=0;i<n;i++)//输出格式！仔细看题！ 
//		{
//			if(i!=0)
//				printf(" "); 
//			printf("%d",a[i]);
//		}
//		printf("\n");
//
//	} 
 
 
 
//	char* p="abc";
//	*p ='w';
//	printf("%s",p);
//	int a=1;
//	int b=2;
//	int c=3;
//	int d=4;
//	int i=0;
//	int * p[4]={&a,&b,&c,&d};
//	for(i=0;i<4;i++)
//	{
//		printf("%d  ",*p[i]);
//	}
//	int a[]={1,2,3,4,5};
//	int b[]={2,3,4,5,6};
//	int c[]={3,4,5,6,7};
//	int *parr[]={a,b,c};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<5;j++)
//		{
//			printf("%d",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	char *a[5];
//	char (*p)[5]=&a;
//	int a[2][5]={1,2,3,4,5,6,7,8,9,10};
//	*(a+i)
//	*(p+i)
//	a[i]==p[i]
//	*(p[i]+j)==p[i][j]=*(*(p+i)+j)==*(*(p+i)[j])
//	int *p=a;
//	*(p+i);
//	int (*p)[10]=&a;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d, ",(*p)[i]) ;
//		printf("%d ",*(*p+i));
//	}

