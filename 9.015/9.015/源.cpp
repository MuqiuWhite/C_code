#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char *my_strstr(const char* a1, const char* a2)
{
	assert(a1&& a2);
	char* s1;
	char* s2;
	char* cp=a1;
	if (*a2 == '\0')
	{
		return a1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = a2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 = '\0')
		{
			//?ҵ???
			return cp;
		}
		cp++;
	}
	return NULL;//?Ҳ???
}

int main()
{
	char a1[] = "abbccddsd";
	char a2[] = "dd";
	char *ret=my_strstr(a1, a2);
	return 0;
}

void *my_memcpy(void* dest, const void* src, size_t count)
{
	void* cp = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return cp;
}