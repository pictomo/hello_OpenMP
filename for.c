#include <stdio.h>
#include <omp.h>

int main()
{
	int length = 100;
	int dest[length];

#pragma omp parallel // 並列リージョン指示文 デフォルトでは同じ処理を複数のスレッドで実行
	{
#pragma omp for
		for (int i = 0; i < length; i++)
		{
			dest[i] = i * 2;
		}
	}

	// 以下でも同じ
	// # pragma omp parallel for
	// 	for (int i = 0; i < length; i++)
	// 	{
	// 		dest[i] = i * 2;
	// 	}

	for (int i = 0; i < length; i++)
	{
		printf("%d ", dest[i]);
	}
	return 0;
}
