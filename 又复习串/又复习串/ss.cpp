#include "ss.h"
void Asign(sc& str, char* b)
{
	int i;
	for (i = 0; b[i] != '\0'; i++)
	{
		str.a[i] = b[i];
	}
	str.length = i;
}

void copy(sc& str, sc b)
{
	int i = 0;
	for (i = 0; b.a[i] != '\0'; i++)
	{
		str.a[i] = b.a[i];
	}
	str.length = i;
}

bool equal(sc str, sc b)
{
	int i = 0;
	if (str.length != b.length)             //长度不相等时返回0
		return false;
	for (i = 0; b.a[i] != '\0' && str.a[i] != '\0'; i++)
	{
		if (b.a[i] != str.a[i])
			return false;
	}
	return true;
}

int length(sc s)
{
	return s.length;
}

sc concat(sc s, sc b)
{
	sc str;
	int i;
	str.length = s.length + b.length;
	
	for (i = 0; s.a[i]!='\0'; i++)
	{
		str.a[i] = s.a[i];
	}
	for (i = 0; b.a[i] != '\0'; i++)
	{
		str.a[s.length+1] = b.a[i];
	}
	return str;
}

sc sub(sc s, int i, int j)
{
	sc str;
	int k = 0;
	int size = s.length;

	if (i > size || i < 0 || j<0 || j + i - 1>size)
	{
		return str;
	}
	for (k = i - 1; k < i + j - 1; k++)
	{
		str.a[k - i + 1] = s.a[k];
	}
	str.length = j;
	return str;
}

sc in(sc s, sc r, int i)
{
	int j;
	sc str;
	str.length = 0;
	if (i <= 0 || i > s.length + 1)  //参数不正确时返回空串
		return str;
	for (j = 0; j<i-1; j++)
	{
		str.a[j] = s.a[j];
	}
	for (j = 0; j < r.length; j++)
	{
		str.a[i+j-1] = r.a[j];
	}
	for (j = i - 1; j < s.length; j++)
	{
		str.a[r.length - 1] = s.a[j ];
	}
	str.length = s.length + r.length;
	return str;
}

sc del(sc s, int i, int j)
{
	int k = 0;
	sc str;
	if (i<0 || j<0 || i>s.length || i + j - 1>s.length)
		return str;

	for (k = 0; k < i-1; k++)
	{
		str.a[k] = s.a[k];
	}
	for (k = i + j - 1; k < s.length - 1; k++)
	{
		str.a[k-j] = s.a[k];
	}
	return str;
}

sc rep(sc s, int i, int j,sc t)
{
	int k;
	sc str;
	if (i<0 || j<0 || i>s.length || i + j - 1>s.length)
		return str;

	for (k = 0; k < i-1; k++)
	{
		str.a[k] = s.a[k];
	}
	for (k = 0; k < t.length; k++)
	{
		str.a[k+i-1] = t.a[k];
	}
	for (k = i + j - 1; k < s.length - 1; k++)
	{
		str.a[k + t.length - j] = s.a[k];
	}
	str.length = s.length + t.length - j;
}