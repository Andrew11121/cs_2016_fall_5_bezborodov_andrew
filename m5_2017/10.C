#include <stdio.h>
#include <math.h>
#define N 5

void Rightrot(int *mas, int k)
{
	int i, j, tmp;
	for (i = 1; i <= k; i++)
	{
		tmp = mas[N - 1];
		for (j = N - 1; j>0; j--)
			mas[j] = mas[j - 1];
		mas[0] = tmp;
	}
}

int main()
{
	int a[N] = { 0 };
	int i, k;
	for (i = 0; i<N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Input naskolko sdvigat K:");
	scanf("%i", &k);
	Rightrot(a, k);
	for (i = 0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
