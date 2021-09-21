#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

__int64 re(int n)
{
	if (n == 1)
		return 3;

	return re(n - 1)*3;

}
int main()
{
	int t = 0;
	while (scanf("%d", &t) != EOF)
	{
		while (t--)
		{
			int n = 0, k = 0;
			scanf("%d", &n);
			printf("%I64d\n",re(n));
		}
	}
}