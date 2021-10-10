#define _CRT_SECURE_NO_WARNINGS 1
/*int n, a, i;
while (scanf("%d", &n) != EOF)
{
	int sum = 0;
	while (n--)
	{
		scanf("%d", &a);
		for (i = 2; i <= sqrt(a);i++)
		{
			if (a%i==0)
			{
				break;
			}
		}
		if (i > sqrt(a))
		{
			sum++;
		}
	}
	printf("%d\n", sum);
}*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n, m, j;
	while (scanf("%d%d", &n, &m) == 2)
	{
		int a = n;
		int b = m;
		while (n % m)
		{
			j = n % m;
			n = m;
			m = j;
		}
		printf("%d\n", a * b / m);
	}

	return 0;
}


