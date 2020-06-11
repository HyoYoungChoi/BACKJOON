#include <cstdio>

int main()
{
	int N, Max = 0, Count;

	for (int i = 1; i <= 9; ++i)
	{
		scanf("%d", &N);

		if (Max < N)
		{
			Max = N;
			Count = i;
		}
	}
	printf("%d\n%d", Max, Count);

	return 0;
}