#include <stdio.h>

void Rightrot(int a, int x)
{
	printf("%d >> %d == %d\n", a, x, a >> x);
}

void main(void)
{
	int a, x;
	printf("Input a number:");
	scanf("%i", &a);
	printf("Input naskok sdivgat vpravo:");
	scanf("%i", &x);
	Rightrot(a, x);
}
