#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel
	{
		printf("parallel\n");
#pragma omp barrier
#pragma omp single
		{
			printf("single\n");
		}
	}
}
