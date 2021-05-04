#include <stdio.h>
#include <math.h>
int main()
{
	char arr2[] = {'b', 'i', 't'};
	printf("%s\n",arr2);
	char arr3[] = {'b', 'i', 't','\0'};
	printf("%s",arr3);

    int a,b,c,i=0;
    while(i<6)
	{
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
    	printf("输入正确\n");
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
			printf("直角三角形\n");
			
		}
		if(a==b==c)
		{
			printf("等边三角形\n"); 
			
		}
		if(a==b||b==c||a==c)
		{
			printf("等腰三角形\n");	
			
		} 
	i++;}
		
	}

	int a,b,i=0;
	scanf("%d%d",&a,&b);
	for(i=2;i<=sqrt(a)&&i<sqrt(b);i++)
	{
	if(a%i==0&&b%i==0)
		printf("NOT\n");
		break;
	}
	if(i>sqrt(a)&&i>sqrt(b))
		printf("YES\n");

	int a=0,i=0;
	for(a=1000;a<2001;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			break;
		}
		if(i==a)
		printf("%4d\n",a);
	}

	int n,i,j,r,l,x,y;

	scanf("%d",&n);

	l=n-1;
	r=0;
	x=n-1;
	y=0;
	for(i=0;i<n;i++)
	{
		for(l=x;l>0&&l<=x;l--)
			{
				putchar(' ');
			
			}
		for(j=0;j<9;j++)
		{
			putchar('*');
		}
		for(r=0;r>0&&r<=y;r++)
		{
			putchar(' ');
			
		}
			
	x--;
	y++;
	
	printf("\n");
	}
	
	int w=1,q,count=1;
	for(i=0;i<n;i++)//行 
	{
		for(l=x;l>0&&l<=x;l--)
			{
				putchar(' ');			
			}			
		for(j=1;j<=w;j++)//列 
		{
			if(i<n-1)
			{	
				if(count<3)
				{
					putchar('*');
					count++;			
				}

				for(q=1;q<=w-1;q++)//挖空 
				{
					if(q>1)
					putchar(' ');
				}
			}
			else//最后一行 
				putchar('*');
		}		
		for(l=x;l>0&&l<=x;l--)
			{
				putchar(' ');			
			}
	w+=2;		
	x--;
	count=1;

	
	printf("\n");
	}

return 0; 
 } 
