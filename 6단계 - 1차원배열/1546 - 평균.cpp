#include <cstdio>

int main()
{
	int N, M = 0, T;
	scanf("%d", &N);

	double Sum = 0;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &T);

		Sum += T;

		if (M < T)
			M = T;
	}
	Sum = (double)(Sum) / M * 100;

	printf("%4.3f", Sum / N);

	return 0;
}