#include <stdio.h>
#include <math.h>
// #include <omp.h>

int main()
{
	printf("Processing started.\n");

	double result = 0;

#pragma omp parallel
	{
		printf("hoge\n");
		double local_result = 0;

#pragma omp for
		// for (int i = 1; i <= 1000000000; i++)
		for (int i = 1; i <= 10; i++)
		{
			// local_result += sin(i) * cos(i);
			local_result += i;
		}

#pragma omp critical
		{
			result += local_result;
		}
	}

	printf("result: %f\n", result);

	printf("Processing completed.\n");

	return 0;
}