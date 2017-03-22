#include <stdio.h>
#include <string.h>

void StrCopy(char *t, char *s, int n)
{
	int i = 1;
	while (i <= 2)
	{
		if ((*s++ = *t++) != 0)
			i++;
	}
}

void StrCat(char *t1, char *s1, int n)
{
	int i = 1;
	while (*s1 != 0)
		s1++;
	while (i <= 2)
	{
		if ((*s1++ = *t1++) != 0)
			i++;
	}
}

int StrCompare(char *t2, char *s2, int n)
{
	int i = 1;
	while (*t2 == *s2 && *t2 != 0 && i <= n)
	{
		t2++, s2++;
		i++;
	}
	return *t2 - *s2;
}

void main(void)
{
	char t[] = "abcde";
	char s[] = "aaaaa";
	StrCopy(t, s, 3);
	printf("%s %s\n", t, s);
	printf("\n");

	char t1[] = "abcde";
	char s1[] = "aaaaa";
	StrCat(t1, s1, 3);
	printf("%s %s\n", t1, s1);

	char t2[] = "abaaa";
	char s2[] = "abaaa";
	printf("%i\n", StrCompare(s2, t2, 2));
}
