#include <stdio.h>
#include <math.h>
#include <string.h>

int StringTransform(char *a)
{
	
	int i, j, p = 0;
	j = strlen(a) - 1;
	for (i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] == '1')
			p = p + pow(2, j);
		j--;
	}
	return p;
}
void main(void) 
{
	char S[100];
	printf("Insert a number ");
	gets(S);
	printf("%d\n", StringTransform(S));
}
