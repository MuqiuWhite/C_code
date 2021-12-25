#include <stdio.h>
#define  max 100
#define INF 32767
//边
typedef struct Anode
{
	int adjvex;//顶点
	struct Anode* nexta;//下一条边
	int weight;
}Anode;

//顶点
typedef struct Vnode
{
	int data;
	Anode* fista;//指向的边
}Vnode;
//邻接表
typedef struct
{
	Vnode adjlist[max];
	int n, e;
}AdjGraph;

//创建图
void  create(AdjGraph*& G,int A[max][max], int n, int e)
{
	int i, j;
	Anode* p;
	G = (AdjGraph*)malloc(sizeof(AdjGraph));
	for (i = 0; i < n; i++)
	{
		G->adjlist[i].fista = NULL;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (A[i][j] != 0 && A[i][j] != INF)
			{
				p = (Anode*)malloc(sizeof(Anode));
				p->adjvex = j;
				p->weight = A[i][j];
				p->nexta = G->adjlist[i].fista;
				G->adjlist[i].fista = p;
			}
		}
	}
	G->n = n; G->e = e;
}

void print(AdjGraph* G)
{
	int i;
	Anode* p;
	for (i = 0; i < G->n; i++)
	{
		p = G->adjlist[i].fista;//第一条边结点
		printf("%d ", i);
		if (p != NULL)
		{
			printf("%d[%d]->", p->adjvex, p->weight);//输出顶点，权重
			p = p->nexta;//指向下一条边
		}
		printf("^\n");
	}
}

void des(AdjGraph*& G)
{
	int i;
	Anode* p, * pre;
	for (i = 0; i < G->n; i++)
	{
		pre = G->adjlist[i].fista;
		if (pre != NULL)
		{
			p = pre->nexta;
			while (p != NULL)
			{
				free(pre);
				pre = p;
				p = p->nexta;
			}
			free(p);
		}
	}

	free(G);
}
int vis[max] = { 0 };
void high(AdjGraph* G,int v)
{
	int i;
	Anode* p;
	vis[v] = 1;
	printf("%d ", v);
	p = G->adjlist[v].fista;
	while (p != NULL)
	{
		if (vis[p->adjvex] == 0)
		{
			high(G, p->adjvex);

		}
		p = p->nexta;
	}
}

void bfs(AdjGraph* g, int v)
{
	int w, i;
	Anode* p;
	Queue* q;
	init(q);
	int vis[max] = { 0 };
	for (i = 0; i < g->n; i++)
	{
		vis[i] = 0;
	}
	printf("%d ", v);
	vis[v] = 1;
	en(q, v);
	while (!empty(q))
	{
		de(q, w);
		p = g->adjlist[w].fista;
		while (p != NULL)
		{
			if (vis[p->adjvex] == 0)
			{
				printf("%d ", p->adjvex);
				vis[p->adjvex] = 1;
				en(q, p->adjvex);
			}
			p = p->nexta;
		}
	}
	printf("\n");																																																																																																																																																																																																																																																																																																																																																						
}