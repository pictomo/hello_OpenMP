#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel
	{
#pragma omp sections
		{
#pragma omp section
			{
				int thread_num = omp_get_thread_num();
				printf("section 1 : thread %d\n", thread_num);
			}
#pragma omp section
			{
				int thread_num = omp_get_thread_num();
				printf("section 2 : thread %d\n", thread_num);
			}
#pragma omp section
			{
				int thread_num = omp_get_thread_num();
				printf("section 3 : thread %d\n", thread_num);
			}
#pragma omp section
			{
				int thread_num = omp_get_thread_num();
				printf("section 4 : thread %d\n", thread_num);
			}
#pragma omp section
			{
				int thread_num = omp_get_thread_num();
				printf("section 5 : thread %d\n", thread_num);
			}
		}
	}
	return 0;
}
