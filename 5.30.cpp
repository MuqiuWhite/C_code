#include <stdio.h>
int jump(int n)
{
	int sum=0;
	if(n>2)
	{
		sum=jump(n-1)+jump(n-2);		
	}
	else if(n>0)//0<n<=2
	return n;
	else// n<=0
	{
		printf("´íÎó\n");
		return 0;
	}
	return sum;
		
}

int main()
{
	int n=0;
	scanf("%d",&n);

	int sum=jump(n);
	
	if(sum!=0)
	{
		printf("%d",sum);
	}
return 0;
 } 
