#include <stdio.h>
int main()
{
	char a[60],b[60];
	gets(a);
	gets(b);
	int i=0,j,t,count=0;
	while(a[t]!='\0')
	{
		t=i;j=0;
	while(b[j]!='\0'&&a[t]==b[j])
	{t++;j++;
	}
	if(b[j]=='\0')
	{count++;i=t;
	}
	else
	i++;
	}
	printf("%d ",count);
return 0;
 } 
