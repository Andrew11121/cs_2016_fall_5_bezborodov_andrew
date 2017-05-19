#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define N 10000

double F(double x)
{
	double f;
	f = sin(x) + cos(x);
	return f;
}

int main()
{
	char k;
	printf("Vvedite tochnost otveta - skolko znakov posle zapyatoi(Max:9): ");
	scanf("%c", &k);
	char string[] = "%.zf\n";
	string[2] = k;

	float Int = 0, x, a, b, h;
	const double Pi = 3.14159;
	printf("Lower border : ");
	scanf("%f", &a);
	printf("Upper border: ");
	scanf("%f", &b);
	h = (b - a) / N;
	x = a + h;
	while (x < b)
	{
		Int = Int + 4 * F(x);
		x = x + h;
		if (x >= b) 
			break;
		Int = Int + 2 * F(x);
		x = x + h;
	}
	Int = (h / 3)*(Int + F(a) + F(b));
	printf(string, Int);
	return 0;
}
