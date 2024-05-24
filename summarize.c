#include <stdio.h>
#include <omp.h>

int main()
{
	int sum = 0;
#pragma omp parallel for reduction(+ : sum) // reduction指示節
	for (int i = 0; i <= 100; i++)
	{
		sum += i;
	}

	printf("sum : %d\n", sum);

	return 0;
}