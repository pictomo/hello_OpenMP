#include <stdio.h>
#include <omp.h>

int main()
{
	int shared = 3;
#pragma omp parallel
	{
		int thread_num = omp_get_thread_num();
		printf("thread : %d, shared : %d\n", thread_num, shared);
	}
#pragma omp parallel private(shared)
	{
		shared++;
	}
	printf("shared : %d\n", shared);
	return 0;
}
