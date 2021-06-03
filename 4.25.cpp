#include <stdio.h> 
#include <math.h>
int main()
{
//	double s=100.0,h=50;
//	int i;
//	for(i=2;i<11;i++)
//	{	
//		s=s+h;
//		h=h/2;
//	}
//	printf("%f,%f",s,h);



//	int d,z,x;
//	for(d=0;d<34;d++)
//	{
//		for(z=0;z<=50-d;z++)
//		{
//			x=100-d-z;
//			if(3*d+2*z+x/2==100)
//			printf("%d,%d,%d\n",d,z,x);
//		}
//	
//	}
//	
//	int i,j,s;
//	for(i=1;i<10;i++) 
//	{
//		for(j=1;j<=i;j++)
//		{
//			s=i*j;
//			printf("%d*%d=%2d  ",j,i,s);
//		}
//		printf("\n");
//	}

//	double i=1,n=1,e=1,m=1;
//	
//		while(m>=0.001)
//		{	
//			m=1.0/n;
//			e=m+e;
//			n*=++i;
//		}
//	printf("%f",e);

	int n=5,i,s=0,t=0,a=2;
//	scanf("%d%d",&n,&a);
		for(i=1;i<=n;i++)
	{
		t=a*10+a;
		s=s+t;
	}
		printf("%d",s);
return 0;
}
