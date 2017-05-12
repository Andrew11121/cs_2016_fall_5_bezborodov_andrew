#include <stdio.h>

int rightrot(int a, int x)
{
	int t1, t2;

	x = x % (sizeof(a) * 8);  
	t1 = a >> x;   
	t2 = a << (sizeof(a) * 8 - x); 

	return t1 | t2;  
}

void main(void)
{
	int a, x;
	printf("Input a number:");
	scanf_s("%i", &a);
	printf("Input naskok sdivgat vpravo:");
	scanf_s("%i", &x);
	printf("Res - %i\n", rightrot(a, x));
}
