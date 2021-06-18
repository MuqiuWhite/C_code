#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,s=0,i=0;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		s=0;c=0;
		for(i=a;i<=b;i++)
		{
			
			if(i%2==0)
			{
				s=s+i*i;		
			}
			else
				c=c+i*i*i;
		}		
		printf("%d  %d\n",s,c);		
	}
	
return 0;
 } 
