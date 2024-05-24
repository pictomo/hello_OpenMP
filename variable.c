#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel
	{
		int thread_num = omp_get_thread_num();
		printf("thread : %d\n", thread_num);
	}
	return 0;
}
