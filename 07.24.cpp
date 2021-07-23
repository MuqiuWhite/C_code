#include <stdio.h>
#include <string.h>
int main()
{
	int n=0;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n]={0};
		int sum=1;
		int i=0,m=0,k=0,r=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=a[i]*sum;
		}
		for(i=0;i<n-1;i++)
		{
			m=a[i];
				k=a[i+1];
			while(k)
			{
				
				r=m%k;
				m=k;
				k=r;				
			}
			a[i+1]=m;	
		}
		printf("%d\n",sum/m);
	}
	
	return 0;
 } 
char a[100]="0";
	int i=0,n=0;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(n--)
		{
			gets(a);
			int a_count=0,i_count=0,e_count=0,o_count=0,u_count=0;
			int size=strlen(a);
		for(i=0;i<size;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
				a[i]=a[i]+32;
			if(a[i]=='a')
				a_count++;
			if(a[i]=='e')
				e_count++;
			if(a[i]=='i')
				i_count++;
			if(a[i]=='o')
				o_count++;
			if(a[i]=='u')
				u_count++;					
		}
		if(n!=0)
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",
		        a_count,e_count,i_count,o_count,u_count);
		else
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",
		        a_count,e_count,i_count,o_count,u_count);
		}
	}
// char a[100]="0";
//	int i=0;
//	while(gets(a))
//	{
//		int size=strlen(a);
//		a[0]=a[0]-32;
//		for(i=0;i<size;i++)
//		{
//			if((a[i]==' ')&&(a[i+1]!='\0') )
//			{
//				a[i+1]=a[i+1]-32;
//			}
//		}
//		puts(a);
//	}
// 	char a[100]="0";
//	int i=0;
//	while(scanf("%s",&a)!=EOF)
//	{
//		char m='A';
//		int size=strlen(a);
//		for(i=0;i<size;i++)
//		{
//			if(a[i]>=m)
//			{		
//				m=a[i];
//			}
//		}
//		for(i=0;i<size;i++)
//		{
//			putchar(a[i]);
//			if(a[i]==m)
//				printf("(max)");
//		}
//		printf("\n");
//
//	}
