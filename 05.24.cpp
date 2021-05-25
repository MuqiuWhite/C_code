#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//	int main()
//	{
//	int *p=(int*)malloc(10*sizeof(int));
//	if(p==NULL)
//		printf("%s\n",strerror(errno));
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//    free(p);

//	int* p=(int*)calloc(10,sizeof(int));
//	if(p==NULL)
//	{
//		printf("%s\n ",strerror(errno));
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			printf("%d  ",*(p+i))
//		;}
//	}
//	free(p);
//	p=NULL;
	char *get(char*p)
	{
		p=(char*)malloc(100);
		return p;		 
	}
void test(void)
{
	char *str=NULL;
	str=get(str);
	strcpy(str,"hello world");
	printf(str);
	free(str);
	str=NULL;
}

int main()
{
	Test();

	
return 0;	
} 
