#include <stdio.h>

int rightrot(int a, int x)
{
	int i, j;
	i = a >> x;   
	j = a << (sizeof(a) * 8 - x); 

	return i | j;  
}
int main()
{
	int a, x;
	printf("Input a number:");
	scanf("%i", &a);
	printf("Input naskok sdivgat vpravo:");
	scanf("%i", &x);
	printf("Res - %i\n", rightrot(a, x));
	return 0;
}
