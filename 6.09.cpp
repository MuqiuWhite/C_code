#include <stdio.h>
int main()
{
//	int n=0;
//	int b=0,s=0;
//	while(scanf("%d",&n)!=EOF)
//	{
//		s=0;
//	while(n--)
//	{
//		
//		scanf("%d",&b);
//		s+=b;
//	
//	}
//		printf("%d\n",s);
//	}

//	int a=0,b=0,s=0;
//	while(scanf("%d%d",&a,&b)!=EOF)
//	{
//		s=0;
//		s=a+b;
//		printf("%d\n",s);
//		printf("\n");
//	}

//	int a,s,c,b;
//	scanf("%d",&a);
//	while(a--)
//	{
//		s=0;
//		scanf("%d",&b);
//		while(b--)
//		{
//			scanf("%d",&c);
//			s+=c;
//		}
//		if(a!=0)
//		{
//			printf("%d\n",s);
//			printf("\n");
//		}
//		else
//		{
//			printf("%d\n",s);
//		}
//	}

	int a,b,s;
	while(scanf("%d",&a)!=EOF)
	{
		s=0;
		for(b=1;b<=a;b++)
		{
			s+=b;
		}

			printf("%d\n",s);
			printf("\n");
	
	} 
return 0;
 } 
