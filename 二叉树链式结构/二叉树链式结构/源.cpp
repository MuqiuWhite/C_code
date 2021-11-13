#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->data = x;
	node->left = node->right = NULL;
	return  node;
}
BTNode* CreatBinaryTree()
{
	BTNode* nodeA = BuyNode('A');
	BTNode* nodeB = BuyNode('B');
	BTNode* nodeC = BuyNode('C');
	BTNode* nodeD = BuyNode('D');
	BTNode* nodeE = BuyNode('E');
	BTNode* nodeF = BuyNode('F');
	nodeA->left = nodeB;
	nodeA->right = nodeC;
	nodeB->left = nodeD;
	nodeC->left = nodeE;
	nodeC->right = nodeF;
	return nodeA;
}
void PreOrder(BTNode *root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PreOrder(root->left);
	printf("%c ", root->data);
	PreOrder(root->right);
}
void PostOrder(BTNode* root)
{

}

int Size(BTNode*root)
{
	return root == NULL ? 0 : Size(root->left) + Size(root->right)+1;//×ÓÊ÷×Ô¼º

}
int main()
{
	BTNode* root = CreatBinaryTree();
	PreOrder(root);
	
	printf("\n%d ", Size(root));
}