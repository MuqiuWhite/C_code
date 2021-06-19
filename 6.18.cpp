#include <stdio.h>
#include <math.h>
int main()
{
	long n,m;
	double s=0;
	int i;
//	int b=0;
//	double a;
	while(scanf("%d%d",&n,&m)!=EOF)
	{


		int i=0;
		s=0;
		for(i=0;i<n;i++)
		{
		if(n>0&&n<=10000)
		{
			if(i==0)
				s=n;
						
			s=s+sqrt(n);
			n=sqrt(n);
		}
		}
		printf("%.2lf\n",s);
	
	}
	
return 0;
}
 
 
 //	int a=0,b=0,c=0,s=0,i=0,t=0;
//	while(scanf("%d%d",&a,&b)!=EOF)
//	{
//		if(a>b)
//		{
//			t=a;
//			a=b;
//			b=t;
//		}
//		s=0;c=0;
//		for(i=a;i<=b;i++)
//		{
//			
//			if(i%2==0)
//			{
//				s=s+i*i;		
//			}
//			else
//				c=c+i*i*i;
//		}		
//		printf("%d  %d\n",s,c);		
//	} 



//	int a;
//	int i=0,j=0,k=0;
//	double b;
//	while(scanf("%d",&a)!=EOF&&a)
//	{
//		i=0;j=0;k=0;
//		while(a--)
//		{
//			scanf("%lf",&b);
//	
//			if(b<0)
//			{
//				i++;
//			}
//			else if(b==0)
//				j++;
//			else 
//				k++;
//			
//		}
//		printf("%d %d %d\n",i,j,k);
//	}


//		a=0;
//		for(i=0;i<m;i++)
//		{
//			if(i==0)
//			s[i]=n;
//			else
//			{
//				s[i]=sqrt(s[i-1]);
//	
//			}
//			a+=s[i];
//		}	
