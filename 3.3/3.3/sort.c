#include "sort.h"
// ��������
void InsertSort(int* a, int n)
{
	assert(a);

	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int x = a[end + 1];//��x���롾0��end������������
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;//�Ӻ���ǰ
			}
			else
				break;
		}

	}
}

// ϣ������
void ShellSort(int* a, int n);
