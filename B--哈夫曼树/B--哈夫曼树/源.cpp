#include <stdio.h>


typedef struct
{
	int weight;
	int parent, l, r;

}HTNode,*Huff;

void Create(Huff HT, int n)
{
	if (n <= 1)
		return;
	int m = 2 * n - 1;//数组共有2n-1个元素
	HT =new HTNode[m + 1];//0号元素未用，HT[m]表示根节点
	int i;
	for (i = 1; i <= m; i++)//将2n-1个元素的l,r,parent置为0
	{
		HT[i].l = 0;
		HT[i].r = 0;
		HT[i].parent = 0;
	}

	for (i = 1; i <= n; i++)
	{
		scanf("%d", HT[i].weight);//输入前n个元素的weight值
	}

	//初始化结束，下面开始建立哈夫曼树
	for (i = n + 1; i = m; i++)
	{//合并产生n-1个结点——构造Huffman树
		Select(HT, i - 1, s1, s2);//在HT【k】{1=k=i-1}中选择两个其双亲域为0，
				//且权值最小的结点，并返回它们在HT中的序号s1和s2
		HT【s1】.parent = i;
		HT【s2】.parent = i;//表示从F中删除s1、s2
		HT【i】.lch = s1;
		HT【i】.rch = s2;
		HT【i】.weight = HT【s1】.weight + HT【s2】.weight;//i的权值为左右孩子权值之和
	}
}


















