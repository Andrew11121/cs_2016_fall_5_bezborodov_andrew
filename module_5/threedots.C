#include <stdio.h>
#include <math.h>
float F(float x) {
	float func;
	func = x*x*x;
	return func;
}

int main()
{
	float h, x, a, b;
	float Res = 0;
	float R1 = 0;
	float R2 = 0;

	char s;
	printf("Vvedite tochnost polychaemyx znacheniy(Max-9): ");
	scanf("%c", &s);
	char string[] = "%.zf\n";
	string[2] = s;
	printf("Lower border: ");
	scanf("%f", &a);
	printf("Upper border: ");
	scanf("%f", &b);
	printf("Enter your step: ");
	scanf("%f", &h);
	x = a;
	R1 = (1 / (2 * h))*((-3) * F(x) + 4 * (F(x + h)) - (F(x + 2 * h)));
	R2 = (1 / (2 * h))*(-F(x) + F(x + 2 * h));
	printf(string, R1);
	printf(string, R2);
	while (x + 2 * h <= b) {
		Res = (1 / (2 * h))*(F(x) - 4 * (F(x + h)) + 3 * (F(x + 2 * h)));
		x = x + h;
		printf(string, Res);
	}
	return 0;
}
