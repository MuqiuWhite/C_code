#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>
typedef int Node;
typedef struct BTN
{
	struct BTN* left;
	struct BTN* right;
	Node data;
}BTN;
BTN* create(Node x)
{
	BTN* n = (BTN*)malloc(sizeof(BTN));
	n->data = x;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void pre(BTN* r)
{
	printf("%d", r->d);
	pre(r-<l)
}
int s()
{
	root==size(r)+size(l)+1
}
int main()
{

}