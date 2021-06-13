#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
	int id;
	struct nodetype * link;
}node;

node *creatlink(int a[10])
{
	node *h,*p,*n;
	int i;
	h=p=(node*)malloc(sizeof(node));
	for(i=0;i<10;i++)
	{
		n=(node *)malloc(sizeof(node));
		n->id=a[i];
		p->link=n;
		p=p->link;
	}
	p->link=NULL; 
	return h;
}
void show(node *head)
{
	node *p;
	p=head->link;
	while(p!=NULL)
	{
		printf("%d ",p->id);
		p=p->link;
	}
	printf("\n");
}
int main()
{
	int a[10]={0,11,22,33,44,55,66,77,88,99};
	node *head;
	head=creatlink(a);
	show(head);
//	node *p,*q,*r;
//	p=(node*)malloc(sizeof(node));
//	p->id=1;
//	
//	q=(node*)malloc(sizeof(node));
//	q->id=2;
//	printf("1 p->id=%d,q->id=%d\n",p->id,q->id);
//	p->link=q;
//	q->link=NULL;
//	printf("2 p->id=%d,p->link->id=%d\n",p->id,p->link->id);
//	
//	r=p;
//	printf("3 r->id=%d\n",r->id);
//	r=r->link;
//	printf("3 r->id=%d\n",r->id);
//	free(p);
//	free(q);
//		node *p,*q,*n,*h;
//		int i;
//		h=p=(node *)malloc(sizeof(node));
//		for(i=0;i<10;i++)
//		{
//			n=(node *)malloc(sizeof(node));
//			n->id=i;
//			p->link=n;
//			p=p->link; 
//		}
//		p->link=NULL;
	

{
	
	}	
	return 0;
 } 
