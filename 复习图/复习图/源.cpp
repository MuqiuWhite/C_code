#include <stdio.h>
#define max 100
typedef struct Anode
{
	int adjvex;//边指向的节点的位置
	struct Anode* nextarc;//下一条边的指针
	int weight;//权重
}Anode;
typedef struct Vnode
{
	int data;//节点信息
	Anode* firstarc;//第一条指向该节点的边的指针
}Vnode;
typedef struct
{
	Vnode adjlist[max];//邻接表数组
	int n, e;//顶点，边
}ALGraph;

int visited[max] = { 0 };
void DFS(ALGraph* g, int v)
{
	Anode* p;
	visited[v] = 1;
	printf("%d ", v);
	p = g->adjlist[v].firstarc;//顶点v的下一个节点
	while (p != NULL)
	{
		if (visited[v] == 0)
			DFS(g, v);
		p = p->nextarc;
	}
}

void BFS(ALGraph* g, int v)
{
	int w, i;
	Anode* p;
	Queue* q;
	init(q);

	int visited[max];
	for (i = 0; i < g->n; i++)
	{
		visited[i] = 0;
	}
	printf("%d ", v);
	visited[v] = 1;
	enqueue(q, v);
	while (!empty(q))
	{
		de(q, w);
		p = g->adjlist[w].firstarc;
		while (p != NULL)
		{
			if (visited[p->adjvex] == 0)
			{
				printf();
				visited[p->adjvex] = 1;
				en(q, p->adjvex);
			}
		}
		p = p->nextarc;
	}
}

void BFS(ALGraph* g, int v)
{
	int w, i;
	Anode*p
	queue* q;
	init(q);

	int visited[max];
	for (i = 0; i < g->n; i++)
		visited[i] = 0;
	printf(v);
	visited[v] = 1;
	en(q, v);
	while (!empty(q))
	{
		de(q, w);
		p = g->adjlist[w].firstarc;
		while (p!=NULL)
		{
			if (p->adjvex == 0)
				printf(p->adjvex);
			visited[p->adjvex] = 1;
			en(p->adjvex);
		}
		p = p->nextarc;
	}
	

}

void create(ALGraph*& g, int a[max][max], int n, int e)
{
	int i, j;
	Anode* p;
	g = (ALGraph*)malloc(sizeof(ALGraph));
	for (i = 0; i < n; i++)
	{
		g->adjlist[i].firstarc = NULL;
	}
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			if (a[i][j] != 0 && a[i][j] != null)
			{
				p = (Anode*)malloc(sizeof(Anode));
				p->adjvex = j;
				p->weight = a[i][j];
				p->nextarc = g->adjlist[i].firstarc;
				g->adjlist[i].firstarc = p;
			}
		}
		g->n = n; g->e = e;
	}
}