#include <stdio.h>
#include <math.h>
int main()
{
//  1. 
//	char a;
//	scanf("%d",&a);
//	if(a>=90)
//		a='A';
//	else if(a>=80)
//		a='B';
//	else if(a>=70)
//		a='C';
//	else if(a>=60)
//		a='D';
//	else
//		a='E';
//	
//	printf("%c",a); 

//2.
//	int x,y;
//	scanf("%d",&x);
//	if(x<1)
//		y=x;
//	else if(x<10&&x>=0)
//		y=2*x-1;
//	else 
//		y=3*x-11; 
//	printf("%d",y);


//3.
//	int x,i,count;
//	for(x=1;x<100;x++)
//	{
//		for(i=2;i<=sqrt(x);i++)
//		{
//			
//			if(x%i==0)
//				break;
//		}
//		if(i>sqrt(x))
//			{printf("%d  ",x);
//				count++;
//			}
//	}

//4.
//	int x,g,s,b;
//	for(x=100;x<=999;x++)
//	{
//		g=x%10;
//		s=x/10%10;
//		b=x/100;
//		if(x==g*g*g+s*s*s+b*b*b)
//		{
//			printf("%d ",x);
//		}
//		
//	}


//5.
//	int x,y,i,j;
//	scanf("%d%d",&x,&y);
//	int a[x][y];
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			scanf("%d",&a[i][j]);	
//		}
//	}
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		
//		printf("\n");
//	}	


//6.
//	int x=1;
//	int f1=1,f2=1,f3=0,count,i;
//	for(i=0;i<20;i++)
//	{
//		if(i<2)
//		{
//			printf("1 ");
//			count++;
//			continue;
//		}
//		f3=f2+f1;
//		f1=f2;
//		f2=f3;
//		printf("%d ",f3);	
//		count++;
//		if(count%5==0)
//		printf("\n");
//	}	

//	int a[10]={10,9,8,7,6,5,4,3,2,1};
//	int max,min,i;
//	float mean,s;
//	for(i=0;i<10;i++)
//	{
//		max=a[0];
//		if(max<a[i])
//		{
//			max=a[i];
//		}
//	}
//	
//	for(i=0;i<10;i++)
//	{
//		min=a[0];
//		if(min>a[i])
//		{
//			min=a[i];
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		s=s+a[i];		
//	}
//	mean=s/10.0;
//	
//	printf("%d  ",max);
//	printf("%d  ",min);
//	printf("%f  ",mean);

//	int a[10],mean=0,i,s=0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);	
//	}
//	
//	for(i=0;i<10;i++)
//	{
//		s=s+a[i];	
//	}
//	mean=s/10.0;
//	
//	for(i=0;i<10;i++)
//	{
//		if(a[i]<mean)
//		printf("%d  ",a[i]);	
//	}

//9.
//	int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
//	int i,j,s;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(i==j)
//			{
//				s=s+a[i][j];
//			}
//		}
//	}
//	printf("%d",s);

//10.
//	int n=0,i=0,a=0;
//	double b=0,s=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		a=a+i;
//		b=1.0/a;
//		s=s+b;
//	}
//	printf("%lf\n",s);
	
	
//11.
//	int i=0,a=1,s=0,n;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		a=a*i;
//		s=s+a;
//	}
//	printf("%d",s);
	return 0;
 } 
