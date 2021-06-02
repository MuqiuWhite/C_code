#include <stdio.h>
int main()
{
//	int A=0;
//	int B=0;
//	while(scanf("%d%d",&A,&B)!=EOF)
//	{		
//		printf("%d\n",A+B);		
//	}
//	

	int a[30];
	int i=0,s=0;
	int m;
	scanf("%d",&m);
	printf(" ‰»Î ˝◊÷\n");
	for(i=0;a[i]!='\0';i++)
	{
		scanf("%d",&a[i]);
	}

	do
	{
		s=s+a[i];
		i++;
	}while(a[i+1]!=m);
//	for(i=0;a[i+1]!=m;i++)
//	{	
//		s=s+a[i];
//	}
	printf("%d\n",s);
return 0;
 } 
