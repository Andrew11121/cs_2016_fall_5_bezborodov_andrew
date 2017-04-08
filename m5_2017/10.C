#include <stdio.h


unsigned int rightrot(unsigned int x,unsigned int n)
{
	for(unsigned int i = 0; i < n; i++) 
		__asm ror x, 1
	return x;
}

int main()
{
	unsigned int x, n;
	printf("Imput a value x and the number of rows n:");
	scanf("%u %u", &x, &n);
	x = rightrot(x, n);
	printf("%u\n", x);
	return 0;
}
