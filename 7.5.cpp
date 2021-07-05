#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i,j,x,y,z;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int a[m][n]={0};
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int max=abs(a[0][0]);

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{				
				if(abs(a[i][j])>max)
				{
					max=abs(a[i][j]);
					z=a[i][j];
					x=i+1;
					y=j+1;
				}
			}
		}
		printf("%d %d %d\n",x,y,z);
	
	}
	
	return 0;
}

//int final(int n)
//{
//	int money[6]={100,50,10,5,2,1};
//	int i,sum=0;
//	for(i=0;i<6;i++)
//	{
//		sum+=n/money[i]; //总张数 
//		n=n%money[i];    //余数 
//
//	}
//	return sum;
//
//} 

//	int n;
//	int i,save;
//	int a[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		save=0;
//		if(n==0)
//			break;
//	 	for(i=0; i<n; i++)
//		{
//        	scanf("%d",&a[i]);
//		}   
//		for(i=0; i<n; i++)
//		{
//        	save=save+final(a[i]);
//		}   
//		printf("%d\n",save);
//	}
