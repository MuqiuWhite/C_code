#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
//	double a,b,c,d;
//	double s;
//	while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=EOF)
//	{
//		s=sqrt((a-c)*(a-c)+(b-d)*(b-d));
//		printf("%.2f\n",s);
//	}

	double a;
	while(scanf("%lf",&a)!=EOF)
	{
		a=fabs(a);
		printf("%.2lf\n",a);
	}
	 	
//	char a,b,c,t;
//	while(scanf("%c%c%c",&a,&b,&c)!=EOF)
//{
//	getchar();
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a>c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	
//	printf("%c %c %c\n",a,b,c);	
//}
return 0;
}
