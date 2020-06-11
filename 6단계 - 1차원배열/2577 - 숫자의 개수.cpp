#include <cstdio>

int main()
{
	int A, B, C, N;
	scanf("%d%d%d", &A, &B, &C);
	N = A * B * C;
	for (int i = 0; i < 10; ++i)
	{
		int Number = N, Count = 0;
		while (true)
		{
			if (i == (Number % 10))
				++Count;

			Number /= 10;

			if (!Number)
				break;
		}
		printf("%d\n", Count);
	}
	return 0;
}