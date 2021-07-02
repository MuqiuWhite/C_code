#include <stdio.h>
//int re(int a[],int i,int n,int m)
//{
//	int f=0,j=0;
//	int temp =0;
//	if((i+1)%m==0)
//	{
//			for(j=i;j>=temp;j--)
//			{
//				f=(f+a[j-1])/m;	
//				printf("%d  ",f);
//				temp=i;
//			}
//	}
//}
//
//int no_r(int n,int r,int a[])
//{
//	int f;
//	int j;
//	for(j=n-1;j>=(n-1-r);j--)
//	{
//		f=(f+a[j])/r;	
//		printf("%d  ",f);		
//	}	
//}
int main()
{
//	int r,f;
//	int i,j,s;
//	int n,m;//总共n个数，每m个数求平均值 
//	int temp =0;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{	
//		r=n%m;//余数
//		s=n%m;//结果
//		int a[n]={0};
//		for(i=0,j=2;i<n;i++,j+2)
//		{
//			a[i]=j;
//		}
//		for(i=0;i<n;i++)
//		{
//			if(r==0)
//			{
//				re(a,i,n,m);
//			}
//			if(r!=0)
//			{
//				re(a,i,n-r,m);
//				no_r(n,r,a);
//			}
//		}
//	}
//		
//		if((i+1)%m==0)
//		{
//			for(j=i;j>=temp;j--)
//			{
//				f=(f+a[j-1])/m;	
//				printf("%d  ",f);
//			}
//			temp=i;
//		}
//		if(r==0)
//		{
//			re(a,i,n,m);
//		}
	//	if(r!=0)
	//	{				
//			for(j=n-1;j>=(n-1-r);j--)
//			{
//				f=(f+a[j])/r;	
//				printf("%d  ",f);		
//			}
			
//			re()	
//		}
	int i,n,m,b,c;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		b=2;
		c=0;
		for(i=0;i<n/m;i++)
		{
		//	printf(c++? "%d":"%d ",b+m-1);//是否空格的问题 
		printf("%d ",b+m-1);
		//c初始值0，c++先执行后增加，从0开始，所以没有空格
		b+=m*2; 
		}
		printf(n%m?"%d\n":"\n",b+n%m-1);
	//	如果n %m不等于0，结果为 %d\n,否则为 \n 
	}
								
		
		

return 0;
 } 
 
 //	int n;
//	int i;
//	float max,min;
//	while(scanf("%d",&n)!=EOF)
//	{
//		float a[n]={0};
//		float sum=0;
//		for(i=0;i<n;i++)
//		{
//			scanf("%f",&a[i]);
//			sum=sum+a[i];
//		}
//		
//		max=a[0];
//		min=a[0];
//		for(i=0;i<n;i++)
//		{	
//			if(a[i]>max)
//				max=a[i];
//				
//			if(a[i]<min)
//				min=a[i];
//		}
//		
//		sum=(sum-max-min)/(n-2);
//		printf("%.2f\n",sum);
//	}
