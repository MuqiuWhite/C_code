#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	int sum = 0;
	while (scanf("%d", &n) != EOF)
	{
		while (n--)
		{
			char a;
			int b; 
			getchar();
			scanf("%c%d", &a,&b);
			if (a >= 'A' && a <= 'Z')			
				sum = a - 65 + 1 ;		
			else if(a>='a'&&a<='z')
				sum = -1*(a - 97 + 1);			
			printf("%d\n", sum+b);
			
		}
	}
	return 0;
}
//	int n,i,x,y;
//	scanf("%d",&n);	
//	for(i=1;i<=n;i++)
//	{
//		getchar();
//		scanf("%c %d",&x,&y);
//		if(x>='a'&&x<='z')
//		 printf("%d\n",-1*(x-97+1)+y);
//		else if(x>='A'&&x<='Z') 
//		printf("%d\n",(x-65+1)+y);
//	}
//	return 0;
//}
