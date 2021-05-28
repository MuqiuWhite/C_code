#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct s
//{
//	int n;
//	int arr[0];
//};
typedef struct st_type
{
int i;
int *p_a[0];
}type_a;
int main()
{
int i=0;
type_a *p = malloc(sizeof(type_a));
p->i = 100;
p->p_a = (int *)malloc(p->i*sizeof(int));
//业务处理
for(i=0; i<100; i++)
{
p->p_a[i] = i;
}
//释放空间
free(p->p_a);
p->p_a = NULL;
free(p);
p = NULL;
	
//	int i=0;
//	struct s *ps=(struct s*)malloc(sizeof(struct s)+5*sizeof(int));
//	ps->n=9;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i]=i;
//	}
//	struct s* ptr=realloc(ps, 54);
//	if(ptr!=NULL)
//	{
//		ps=ptr;
//	}
//	
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps);
//	ps=NULL;

	
return 0;
 } 
