#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void array_read(double *a, int n)
{
	int i;
	printf("input array of %i elements:\n", n);
	for (i = 0; i < n; i++)
	{
		printf("A[%i]=", i);
		scanf("%lf", &a[i]);
	}
}

double array_min(double *a, int n)
{
	int i;
	double min_val;
	if (n < 1)
		return 0;
	min_val = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min_val)
			min_val = a[i];
	return min_val;
}

double array_max(double *a, int n)
{
	int i;
	double max_val;
	if (n < 1)
		return 0;
	max_val = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max_val)
			max_val = a[i];
	return max_val;
}
void main(void)
{
	double mas[100];
	int f;
	printf("Input how many elemnts in array:");
	scanf("%i", &f);
	array_read(mas, f);
	printf("Minimum value:%f, Maximum value is %f\n Residual between max and min is %f\n",
		array_min(mas, f), array_max(mas, f), (array_max(mas, f) - array_min(mas, f)));
}
