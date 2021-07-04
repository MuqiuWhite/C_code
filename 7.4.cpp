
//int re(int n)
//{
//	int figure=0;
//	if(n<=4)	
//	{
//		figure=n;	
//	}
//	else
//		figure=re(n-1)+re(n-3);
//
//}
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j,a[100],t;
	int flag=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	
		for(i=0;i<n-1;i++)
		{
			flag=1;
			for(j=0;j<n-1-i;j++)
			{
				if(abs(a[j])<abs(a[j+1]))
				{
					int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
					flag=0;		
				}		
			}
			if(flag==1)
				break;		
		}		
		
		for(i=0;i<n;i++)
		{
			if(i!=0)
				printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
//	int n,m,i,j,temp,t;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		if(n==0&&m==0)
//			break;
//		if(n==0)
//		{
//			printf("%d",m);
//		}
//		int a[100]={0};
//		a[n] = m;
//		for(i = 0;i<n;i++)
//		{
//			scanf("%d",&a[i]);
//		}
//		for(i = 0;i<n;i++)
//		{
//			for(j = i+1;j<=n;j++)
//			{
//				if(a[i]>a[j])
//				{
//					int temp = a[i];
//					a[i] = a[j];
//					a[j] = temp;
//				}
//			}
//		}
//		
//		for(i=0;i<=n;i++)
//		{
//			if(i!=0)
//				printf(" ");
//			printf("%d",a[i]);
//		}
//		printf("\n");
//	}
//	
//	int n=0;
//	int figure;
//	while(scanf("%d",&n)!=EOF)
//	{
//		figure=0;
//		if(n==0)
//			break;
//		figure=re(n); 
//		printf("%d\n",figure);
//	}
//	
