#include <stdio.h>
#include <stdlib.h>
//typedef struct nodetype
//{
//	int id;
//	struct nodetype * link;
//}node;
//
//node *creatlink(int a[10])
//{
//	node *h,*p,*n;
//	int i;
//	h=p=(node*)malloc(sizeof(node));
//	for(i=0;i<10;i++)
//	{
//		n=(node *)malloc(sizeof(node));
//		n->id=a[i];
//		p->link=n;
//		p=p->link;
//	}
//	p->link=NULL; 
//	return h;
//}
//void show(node *head)
//{
//	node *p;
//	p=head->link;
//	while(p!=NULL)
//	{
//		printf("%d ",p->id);
//		p=p->link;
//	}
//	printf("\n");
//}
//
//void insertafter (node *head,int data,int after)
//{
//	node *p,*n;
//	p=head->link;
//	while(p!=NULL && p->id!=after)
//	p=p->link;
//	if(p!=NULL)
//	{
//		n=(node *)malloc(sizeof(node));
//		n->id=data;
//		n->link=p->link;
//		p->link=n;
//	}
//}
//
//void delnode(node *head,int deldata)
//{
//	node *p,*q;
//	p=head->link;
//	q=head;
//	while(p!=NULL && p->id!=deldata)
//	{
//		q=p;
//		p=p->link;
//	}
//	if(p!=NULL)
//	{
//		q->link=p->link;
//		free(p);
//	}
//}
//
//void insertbefore(node *head,int data,int before)
//{
//	node *p,*n,*q;
//	p=head->link;
//	while(p!=NULL && p->id!=before)
//	{
//		q=p;
//		p=p->link;
//	}
//	if(p!=NULL)
//	{
//		n=(node *)malloc(sizeof(node));
//		n->id=data;
//		n->link=p;
//		q->link=n; 
//		
//	}
//}


typedef struct nodetype
{
	int id;
	struct nodetype * link;
}node;

//1.创建链表 
node *creatlink(int a[10])
{
	node *h,*p,*n;
	int i;
	h=p=(node *)malloc(sizeof(node));
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

//输出 
void show(node *head)
{
	node *p;
	p=head->link;
	while(p!=NULL)
	{
		printf("%d  ",p->id);
		p=p->link;	
	}
	printf("\n"); 
}

//后插
void insertafter(node *head,int data,int after)
{
	node *p,*n;
	p=head->link;
	while(p!=NULL && p->id!=after)
	p=p->link;
	if(p!=NULL)
	{
		n=(node *)malloc(sizeof(node));
		n->id=data;
		n->link=p->link;
		p->link=n;
	}
} 

//前插
void insertbefore(node *head,int data,int before)
{
	node *p,*q,*n;
	p=head->link;
	q=head;
	while(p!=NULL && p->id!=before)
	{
		q=p;
		p=p->link;
	}
	if(p!=NULL)
	{
		n=(node *)malloc(sizeof(node));
		n->id=data;
		n->link=p;
		q->link=n;		
	}
} 

//删除
void delnode(node *head,int deldata)
{
	node *p,*q;
	p=head->link;
	q=head;
	while(p!=NULL && p->id!=deldata)
	{
		q=p;
		p=p->link;
	}
	if(p!=NULL)
	{
		q->link=p->link;
		free(p);
	}	
} 


int main()
{
	int a[10]={0,11,22,33,44,55,66,77,88,99};
	node *head;
	head=creatlink(a);
	show(head);
	insertafter(head,35,33);
	show(head);
	insertbefore(head,32,33);
	show(head);
	delnode(head,32);
	show(head);
//	int a[10]={0,11,22,33,44,55,66,77,88,99};
//	node *head;
//	head=creatlink(a);
//	show(head);
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
	

	
	return 0;
 } 
