#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
//	int i;
//	for(i=0;i<100;i++)
//	{
//		if(i%2!=0)
//		{
//			printf("%d  ",i);
//		}
//	}
	
//	int n=3,s=1,i,m=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//		m=m+s;
//	}
//	printf("%d",m);

//	int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int n=0,i;
//	scanf("%d",&n);
//	for(i=0;i<10;i++)
//	{
//		if(a[i]==n)
//	{
//		printf("%d",i);
//	}
//		
//	}
//	if(a[i]!=n)
//	{
//		printf("找不到啊嘤嘤嘤"); 
//	}

//	char a[]="你在干嘛？在摸鱼吗？";
//	char b[]="********************";
//	int r,l;
//	puts(b);
//	for(l=0,r=strlen(a)-1;l<=r;l++,r--)
//	{
//		Sleep(1000);
//		b[l]=a[l];
//		b[r]=a[r];
//		system("cls");
//		puts(b);
//	}

//	char a[]="123";
//	char b[100];
//	int i;
//	for(i=3;i>0;i--)
//	{
//		gets(b);
//		if(strcmp(b,a)==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else 
//		{
//			printf("您还有%d次机会\n",i-1);
//		}
//	}

//	int a[5]={2,3,5,1,6};
//	int n=5,i;
//
//	int l=0,r=4;
//	int mid=0;
//	while(l<=r)
//	{
//		mid=(r+l)/2;
//		if (a[mid]>n)
//		{
//			r=mid-1;
//		}
//		else if(a[mid]<n)
//		{
//			l=mid+1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if(l<=r)
//	{
//		printf("%d",mid);
//	}
//	else
//	printf("找不到"); 
//	srand((unsigned)time(NULL));	
//	int a=rand()%100+1;
//	printf("%d",a);
 
 	int a;
 		int i;
 	for(a=101;a<200;a++)
 	{
// 		if(a%400==0 || (a%100!=0&&a%4==0))
// 		{
// 			printf("%d ",a);
//		 }	int i;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
				break;
			
		}
		if(i>sqrt(a))
		printf("%d  ",a);
 		
	 }
	
	 
return 0;
 } 
