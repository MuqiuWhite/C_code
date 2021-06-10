#include <stdio.h>
fun(int x)
{
	int p;
	if(x==0||x==1)
	return(3);
	p=x-fun(x-3);
	return p;
}
int main()
{
	
	printf("%d",fun(7));
//	int x=0,y=5,z=3;
//	while(z-->0&&++x<5)
//	y=y-1;
//	printf("%d %d %d",x,y,z);
	
return 0;
 } 
