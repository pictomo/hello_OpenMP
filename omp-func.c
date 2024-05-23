#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel // 並列リージョン指示文 デフォルトでは同じ処理を複数のスレッドで実行
	{
		printf("executing threads : %d\n", omp_get_num_threads());
		printf("max threads : %d\n", omp_get_max_threads());
		printf("thread num : %d\n", omp_get_thread_num());
	}
}
