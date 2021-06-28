#include <stdio.h>
#include <string.h>
int main()
{
	int i=0,j=0;
	char b[1000]="0";
	while(scanf("%d",&i)!=EOF)
	{
		getchar();
		while(i--)
		{		
			gets(b);
			int flag=-1;
			int size=strlen(b);
			for(i=0;i<=size;i++)
			{
				if(b[i]==' '||i==size)	//每遇到一个空格就开始处理单词 
				{
					for(j=i-1;j>=0;j--&&j!=flag;j--)//从空格前的字母开始，flag的作用：防止再输出之前的正序的单词，即到上一个空格结束 
					{
						putchar(b[j]);
					}
					flag=i;
					if(i!=size)
						putchar(' ');
				}				
			}
			printf("\n");
		}
	}
	return 0;
}

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
