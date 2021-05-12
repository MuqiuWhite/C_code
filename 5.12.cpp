#include <stdio.h>
int main()
{
		char a[N]={0},b[N]={0},result[N]={0};
	int i,lena,lenb,r;
	printf("输入\n");
	scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	i=0;
	r=lena>lenb?lena:lenb;
	while(i<lena||i<lenb)
	{
		result[r-i]=(i<lena?a[lena-1-i]:'0')+(i<lenb?b[lenb-1-i]:'0')-2*'0';
		i++;	
	} 
	while(i<r){
		result[r-i-1]+=result[r-i]/10;
		result[r-i]=result[r-i]%10+'0';
		i++;
	}
	result[0]+='0';
	puts(result);
	
	char a[100];
	int flag,i,j;
	gets(a);
	int sz=strlen(a);
	flag=0;
	for(i=0,j=sz-1;i<j;i++,j--)
	{
		if(a[i]==a[j]);		
		else
		{
			flag=1;
			printf("不是\n"); 
			break;
		}		
	}
	if(flag==0)
	{
		puts(a);
		printf("是\n");
	}
return 0;	
}

