#include <stdio.h>
int main()
{
	int m=0,n=0,i=0;
	float s=0,t=0;
	while(scanf("%d",&m)!=EOF)
	{
		int flag=1;
		while(m--)
		{
			s=0;
			t=0;
			flag=1;
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				t=1.0/i;
				s=s+flag*t;
				flag=-flag;
				
			}
			printf("%.2f\n",s);
		}
		
	}

	
	
return 0;
} 

//int i,g,s,b;
//	while(scanf("%d%d",&m,&n)!=EOF)
//	{
//		if(m>n)
//		{
//            int temp;
//			temp=m;
//			m=n;
//			n=temp;	
//		}
//		int flag=0;
//		for(i=m;i<=n;i++)
//		{
//			s=i/10%10;
//			g=i%10;
//			b=i/100;
//			if(i==s*s*s+g*g*g+b*b*b)
//			{
//				if(flag!=0)
//                	printf(" ");
//                printf("%d",i);
//                flag++;
//			} 
//		}
//		if(flag==0)
//			printf("no");
//		printf("\n");	
//
//	}
