#include <stdio.h>
int main()
{
	int s=1,n=0,i=0;
	while(scanf("%d",&n)!=EOF)//第n天还剩一个桃子 
{
	s=1;
//	for(i=1;i<n;i++)
	n=n-1;
	while(n--)
	{
		s=(s+1)*2;	  
	}
	printf("%d\n",s);
}
	return 0;
 } 
 
int x,y,n,j,flag,sum=0;
//	while(1)
//	{
//		scanf("%d%d",&x,&y);
//		flag=1;
//		if(x==0&&y==0)
//			break;
//		for(n=x;n<=y;n++)
//		{
//			sum=n*n+n+41;
//			for(j=2;j<sum;j++)
//			{
//				if(sum%j==0)
//				{
//					flag=0; //不是素数 
//				}	 
//			}
//		}
//		
//		if(flag==1)
//		{
//			printf("Ok\n");
//		}
//		else
//			printf("Sorry\n");
//	}
 
//int check()
//{
//	int i=1;
//	return (*(char*)&i);
//}
 
//	int re=check();
//	if(re==1)
//		printf("x");
	
	//char *p =(char*)&i;
	//*p; 
