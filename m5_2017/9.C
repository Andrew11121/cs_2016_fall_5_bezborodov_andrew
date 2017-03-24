#include "stdio.h"

int fib(int n)
{
	if (n == 0)
		return 0;
	else if ((n == -1) || (n == 1))
		return 1;
	else
	{
		if (n > 0)
			return fib(n - 1) + fib(n - 2);
		else
			return fib(n + 2) - fib(n + 1);
	}
}

void main(void)

{
	long int n;
	int i;
	printf("Input n: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		printf("%d - %d\n", i, fib(i));
}
