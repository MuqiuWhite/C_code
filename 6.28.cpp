#include <stdio.h>
#include <string.h>
int main()
{
	long m=0,n=0;
	while(scanf("%d%d",&n,&m)!=EOF&&n!=-1&&m!=-1)
	{
			while(n%m)
			{
				int r=n%m;
				n=m;
				m=r;
			}
			if(n==1)
			{
				printf("YES\n");
			}
			else
				printf("POOR HAHA\n");
			     
	} 

	return 0;
}

//	int i=0,j=0;
//	char b[1000]="0";
//	while(scanf("%d",&i)!=EOF)
//	{
//		getchar();
//		while(i--)
//		{		
//			gets(b);
//			int flag=-1;
//			int size=strlen(b);
//			for(i=0;i<=size;i++)
//			{
//				if(b[i]==' '||i==size)	//ÿ����һ���ո�Ϳ�ʼ������ 
//				{
//					for(j=i-1;j>=0;j--&&j!=flag;j--)//�ӿո�ǰ����ĸ��ʼ��flag�����ã���ֹ�����֮ǰ������ĵ��ʣ�������һ���ո���� 
//					{
//						putchar(b[j]);
//					}
//					flag=i;
//					if(i!=size)
//						putchar(' ');
//				}				
//			}
//			printf("\n");
//		}
//	}





//	int m;
//	double a,b,c;
//	while(scanf("%d",&m)!=EOF)
//	{
//		a=0;b=0;c=0;
//		while(m--)
//		{
//			scanf("%lf%lf%lf",&a,&b,&c);
//			if(a>0&&b>0&&c>0)
//			{
//				if((a+b>c)&&(a+c>b)&&(b+c>a))
//				{
//					printf("YES");
//				}
//				else
//					printf("NO");
//			}
//		}
//	}


//	int a,b;
//	int s=0;
//	while(scanf("%x%x",&a,&b)!=EOF)
//	{
//		s=a+b;
//		printf("%d\n",s);	
//	}
