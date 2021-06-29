#include <stdio.h>
#include <string.h>
int main()
{
	int a,b;
	float s=0;
	char c;
	int t;
	scanf("%d",&t);
	getchar();
	while(t--);
	{
		scanf("%c%d%d",&c,&a,&b);
		getchar();
		switch(c)
		{
			case '+':
				s=a+b;
				break;
			case '-':
				s=a-b;
				break;
			case '*':
				s=a*b;
				break;
			case '/':
				s=(double)a/b;
				break;
		}
	
		if(c=='/'&&a%b!=0)
		{
			printf("%.2f\n",s);
		}
		else
			printf("%d\n",(int)s);
	}

	return 0;
}

//int size=0;
//	int s=0;
//	int i=0;
//	char a[300];
//	while(1)
//	{
//		s=0;
//		gets(a);
//		if(a[0]=='#')
//			break;
//		size=strlen(a);
//		for(i=0;i<size;i++)
//		{
//		
//			if(a[i]==' ')
//				continue;
//			s=s+(i+1)*(a[i]-64);
//						
//		}		
//		printf("%d\n",s);
//	}
