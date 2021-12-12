#include <stdio.h>
#define max 100
//±ß
typedef struct Anode
{
	int adjvex;
	struct Anode* nextp;
	int weight;
}Anode;
//¶¥µã
typedef struct Vnode
{
	char data;
	Anode* firstarc;
}Vnode;
typedef struct
{
	Vnode adjlist[max];
	int n, e;
}ALGraph;

//Bian
typedef struct Anode
{
	int adjvex;
	struct Anode* nextp;
	int weight;

}Anode;
//¶¥µã
typedef struct Vnode
{
	char data;
	Anode* firstarc;
}Vnode;

typedef struct
{
	Vnode adjlist[max];
	int n, e;
}ALGraphf;

int visited[max] = { 0 };
void DFS(ALGraphf* g, int v)
{
	Anode* p;
	visited[v] = 1;
	printf("%d ", v);
	p = g->adjlist[v].firstarc;
	while (p != NULL)
	{
		if (visited[p->adjvex] == 0)
			DFS(g, p->adjvex);
		p = p->nextp;
	}
	while (p != NULL)
	{
		if (visited[p->adjvex] == 0)
			DFS(g, p->adjvex);
		p = p->nextp;
	}
}
int visited[max] = { 0 };
void dfs(ALGraph* g, int v)
{
	Anode* p;
	visited[v] = 1;
	printf("%d ", v);
	p = g->adjlist[v].firstarc;

}