#include <stdio.h>
#include <string.h>
#include <math.h>
//#define n 5
//float max(float a[10])
//{
//	int m=a[0],i;
//	for(i=0;i<10;i++)
//	{
//		if(m<a[i])
//		{
//			m=a[i];
//		}
//		
//	}
//	return m;
//} 
//
//float min(float a[10])
//{
//	int t=a[0],i;
//	for(i=0;i<10;i++)
//	{
//		if(t>a[i])
//		{
//			t=a[i];
//		}
//		
//	}
//	return t;
//} 
//float ave(int a[10])
//{	
//	int i=0;
//	float b=1.0,s=0.0;
//	for(i=0;i<10;i++)
//	{
//		s=a[i]+s;
//	}
//	b=s/10.0;
//	return b;
//}
//int get_max(int x,int y)
//{
//	return (x>y?x:y);
//}
//void get_max(int *px,int *py)
//{	int temp=0;
//	temp=*px;
//	*px=*py;
//	*py=temp;	
//}	

//是素数返回1，不是则返回0 
//int judge(int x)
//{
//	int j;
//	for(j=2;j<=sqrt(x);j++)
//	{   //产生2~x-1的数字，去试除x 
//		if(x%j==0)
//			return 0; //整个函数都结束了 
//	}
//	if(j>sqrt(x))
//		return 1;
//}
int main()
{
	
//	char arr1[]="bit";
//	char arr2[20]="#######";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	int a=20;
//	int b=50;
//	get_max(&a,&b);
//	printf("%d %d",a,b);
//	int a;
//	for(a=100;a<=200;a++)
//	{
//		judge(a);
//		if(judge(a)==1)
//		printf("%d ",a);
//	}
	
//	float a[10];//={0,1,2,3,4,6,7,8,9};
//	int i;
//	for(i=0;i<10;i++)
//	{ 	printf("第%d位学生:",i+1);
//		scanf("%f",&a[i]);
//	} 
//	float sum=0,ave=0;
//	max(a);
//	min(a);
////	ave(a);
//	printf("%f\n",max(a));
//	printf("%f\n",min(a));
////	printf("%f\n",ave(a));
//	for(i=0;i<10;i++)
//	{
//		sum=sum+a[i];
//	}
//	ave=sum/10.0;
//	printf("%f\n",ave);
//	
//	for(i=0;i<10;i++)
//	{
//		if(a[i]<60)
//		printf("%f\n",a[i]);
//	}
//	int a[n];
//	int i,j;
//	for(i=0;i<n;i++)
//	{
//		if(scanf("%d",&a[i])<=0)
//			break;
//		
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d",a[i]);
//	}
	int i=0,j=0,r[3][3]={0},m,s;
	int a[3][4]={1,2,3,4,1,2,3,4,1,2,3,4};
	int b[4][3]={1,2,3,4,1,2,3,4,1,2,3,4};
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			s=0;
			for(m=0;m<4;m++)//while(m<4&&n<4)
			{
				s=s+a[i][m]*b[m][j];	
			}
			r[i][j]=s;
		}	
	}
//		}
//	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%6d",r[i][j]);
		}
		printf("\n");
	}
	
	
	
	
			
	
	
	
	
return 0;	
}
