#include <stdio.h>
#define PI 3.1415927
#include <math.h>
int main()
{
	int n=0;
	int s=1;
	int a=0;
	while(scanf("%d",&n)!=EOF)
	{
		s=1;
		while(n--)
		{
			scanf("%d",&a);
			if(a%2!=0)
			{
				s=s*a;
			}
			
		}
		printf("%d\n",s);	
	}	
	
return 0;
 } 
 
 int a=0;
//	while(scanf("%d",&a)!=EOF)
//	{
//		if(a>=90&&a<=100)	
//			printf("A\n");
//		else if(a>=80&&a<=89)
//			printf("B\n");
//		else if(a>=70&&a<=79)
//			printf("C\n");
//		else if(a>=60&&a<=69)
//			printf("D\n");
//		else if(a >= 0 && a <= 59)
//			printf("E\n");
//		else 
//			{
//				printf("Score is error!\n");				
//			}	
//		
//		}	
 
 
 
 //	double a=0;
//	double s=0;
//	while(scanf("%lf",&a)!=EOF)
//	{
//		s=(4.0/3.0)*PI*a*a*a;	
//		printf("%.3lf\n",s);
//	}
