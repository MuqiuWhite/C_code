#define INF 100000000
#include <stdio.h>
int main()
{
//-Wall;
	FILE *in, *out;
//	in = fopen("data.in", "rb");
//	out = fopen("data.out", "wb");
	in=stdin;
	out=stdout; 
	int i = 0, sum = 1, a = 0, n=0;
	int max = -INF;
	int min = INF;
	while (fscanf(in,"%d", &n)==1)
	{

		sum = sum + n;
		if (n < min)
			min = n;
		if (n > max)
			max = n;
	}
	fprintf(out,"%d %d\n", max, min);

//	fclose(in);
//	fclose(out);
	return 0;
}
