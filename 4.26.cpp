#include <stdio.h>
int main()
{
	int k=1,s=0,i;
	for(i=1;i<=10;i++)
	{	
		k=k*i;
		s=s+k;
	}
	printf("%d",s);

	int k=1,i,t=0,b=0,s=0;
	for(i=1;i<=100;i++)
	{
		s=s+k*k;
	}
	for(i=1;i<=50;i++)
	{
		t=t+k;	
	} 
	for(i=1;i<=10;i++)
	{
		b=b+1.0/k;
	}
	printf("%d",s+t+b);
	
	int i;
	for(i=1; ;i++)
	{
		if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0)
		{
			printf("%d\n",i);
			//break;
		} 
	}

	int j=0,t=0;
	{
		for(j=1;j<35;j++)
		{
			for(t=1;t<35;t++)
			{
				if(t+j==35 && 2*j+4*t==94)
					printf("%d,%d",j,t);
			}
		}
	}

	int g,m,x;
	for(g=1;g<=100;g++)
	{
		for(m=1;m<=100;m++)
		{
			for(x=1;x<=100;x++)
			{
				if(5*g+m*3+x/3.0==100 && g+m+x==100);
				{
					printf("%d %d %d\n",g,m,x);
					break;
				}
			}
		}
	}

	int i,s=1;
	for(i=9;i>=1;i--)
	{
		printf("%d\n",s);
		s=(s+1)*2;
	}
return 0;

 } 
