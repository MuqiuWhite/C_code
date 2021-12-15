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
	int m = 2 * n - 1;//���鹲��2n-1��Ԫ��
	HT =new HTNode[m + 1];//0��Ԫ��δ�ã�HT[m]��ʾ���ڵ�
	int i;
	for (i = 1; i <= m; i++)//��2n-1��Ԫ�ص�l,r,parent��Ϊ0
	{
		HT[i].l = 0;
		HT[i].r = 0;
		HT[i].parent = 0;
	}

	for (i = 1; i <= n; i++)
	{
		scanf("%d", HT[i].weight);//����ǰn��Ԫ�ص�weightֵ
	}

	//��ʼ�����������濪ʼ������������
	for (i = n + 1; i = m; i++)
	{//�ϲ�����n-1����㡪������Huffman��
		Select(HT, i - 1, s1, s2);//��HT��k��{1=k=i-1}��ѡ��������˫����Ϊ0��
				//��Ȩֵ��С�Ľ�㣬������������HT�е����s1��s2
		HT��s1��.parent = i;
		HT��s2��.parent = i;//��ʾ��F��ɾ��s1��s2
		HT��i��.lch = s1;
		HT��i��.rch = s2;
		HT��i��.weight = HT��s1��.weight + HT��s2��.weight;//i��ȨֵΪ���Һ���Ȩֵ֮��
	}
}


















