#include <stdio.h>

int rightrot(int a, int x)
{
	int i, j;

	x = x % (sizeof(a) * 8);  
	i = a >> x;   
	j = a << (sizeof(a) * 8 - x); 

	return t1 | t2;  
}

void main(void)
{
	int a, x;
	printf("Input a number:");
	scanf("%i", &a);
	printf("Input naskok sdivgat vpravo:");
	scanf("%i", &x);
	printf("Res - %i\n", rightrot(a, x));
}
