#include <stdio.h> 
//int o_change(int i)
//{
//	int s=0;
//	while(i!=0)
//	{
//		s+=i%10;
//		i=i/10;	
//	}
//	return s;
//}
//
//int h_change(int i)
//{
//	int s=0;
//	while(i!=0)
//	{
//		s+=i%12;
//		i=i/12;	
//	}
//	return s;
//}
//
//int x_change(int i)
//{
//	int s=0;
//	while(i!=0)
//	{
//		s+=i%16;
//		i=i/16;	
//	}
//	return s;
//}

int main()
{
	int i,b=0;
	char a[20];//输入 
	char n[8][10]={
					"Zhejiang",
					"Beijing",
					"Taiwan",
					"Hong Kong",
					"Macao",
					"Tibet",
					"Liaoning",
					"Shanghai" };
	while(scanf("%d",&b)!=EOF)
	{
		getchar();
		while(b--)
		{
			gets(a);
		
		if(a[0]=='3'&&a[1]=='3')
			i=0;
		else if(a[0]=='1'&&a[1]=='1')
			i=1;
		else if(a[0]=='7'&&a[1]=='1')
			i=2;
		else if(a[0]=='8'&&a[1]=='1')
			i=3;
		else if(a[0]=='8'&&a[1]=='2')
			i=4;
		else if(a[0]=='5'&&a[1]=='4')
			i=5;
		else if(a[0]=='2'&&a[1]=='1')
			i=6;
		else if(a[0]=='3'&&a[1]=='1')
			i=7;
		
		printf("he/she is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table\n",    
		                       n[i],
							   a[10],a[11],//月 
							   a[12],a[13],//日
							   a[6],a[7],a[8],a[9]//年 
							   ); 
	}
	}
	
	return 0;
}

//	int i,g,s,b,q,o,h,x;
//	for(i=2992;i<10000;i++)
//	{
//		o=o_change(i);
//		h=h_change(i);
//		x=x_change(i);
//		if(o == h && h == x && o == x)
//		{
//			printf("%d\n",i);
//		}
//	}
//	
