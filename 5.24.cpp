#include <stdio.h>
int main()
{
	char a[20]="qweg";
	char b[20]="zxc";
	int t=0;
	scanf("%d",&t);
	do
	{
		if(t<=3)
		{
			int i=0,B;
			for(i=t,B=0;i<4&&B<3;i++,B++)
			{
				a[i+3]=a[i];
				a[i]=b[B];				
			}
			for(i=t,B=0;i<t+3&&B<3;i++,B++)
			{
				a[i]=b[B];
			}
		puts(a);
		break;
		}
		else
		{
			printf("无效，请重新输入\n");
			break;
		}
		
	}while(t<0);
	
return 0;
 } 
