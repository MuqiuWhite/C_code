#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,n2;
	scanf("%d",&n);
	if(n%2==0)n--;
	n2=n/2;
	for(i=-n2;i<=n2;i++)
	{
		for(j=0;j<abs(i);j++)
			putchar(' ');
		for(j=0;j<2*(n2-abs(i))+1;j++)
			putchar('*');
		putchar('\n'); 
	}
	
	
return 0;
 } 
