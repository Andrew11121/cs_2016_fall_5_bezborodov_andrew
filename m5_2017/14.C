#include <stdio.h>
#include <string.h>
char rev(char *c)
{
	int j = 0, i, m;
	char mas1[100];
	m = strlen(c);
	for (i = m - 1; i >= 0; --i)
	{
		mas1[j] = c[i];
		j++;
	}
	for (i = 0; c[i] != '\0'; ++i)
		c[i] = mas1[i];
	return *c;
}
void main(void)
{
	int i;
	char mas1[100];
	gets(mas1);
	rev(mas1);
	for (i = 0; mas1[i] != '\0'; ++i)
		printf("%c", mas1[i]);
}
