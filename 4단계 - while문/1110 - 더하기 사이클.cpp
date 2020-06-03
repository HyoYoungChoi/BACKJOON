#include <cstdio>

int main()
{
	int N;
	scanf("%d", &N);

	int A, B, Result = N;
	int Count = 0;
	while (true)
	{
		++Count;
		A = Result / 10;
		B = Result % 10;

		Result = A + B;

		Result = (B * 10) + (Result % 10);

		if (N == Result)
			break;
	}
	printf("%d\n", Count);
	return 0;
}