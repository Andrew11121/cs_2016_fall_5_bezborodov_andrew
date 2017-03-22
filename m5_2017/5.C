#include <stdio.h>

void main(void)
{
	float b, t, f, i;

	printf("Insert bottom number: \n");
	scanf_s("%f", &b);
	printf("Insert top number: \n");
	scanf_s("%f", &t);
	printf("      C      |      F      \n"
		"_____________|_____________\n");
	if (b <= t)
	{
		for (i = b; i <= t; i++)
		{
			f = 1.8 * b + 32;
			printf("%12f | %12f\n", b, f);
			b++;
		} 
	}
	else
		printf("Wrong data\n");
}

