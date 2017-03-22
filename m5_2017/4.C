#include <stdio.h>
#include <conio.h>

#define swap1(t,a,b) {t temp; temp = x; x = y; y = temp;}

void main(void)
{
	int x, y;
	printf("enter x:");
	scanf_s("%d", &x);
  printf("enter y:");
	scanf_s("%d", &y);
	swap1(int, x, y);
	printf("%d %d\n", x, y);
	switch (_getch());
}
