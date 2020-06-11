#include <cstdio>

int main()
{
	int N, Number;
	scanf("%d", &N);

	int Min = 1000000, Max = -1000000;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &Number);

		if (Min > Number)
			Min = Number;

		if (Max < Number)
			Max = Number;
	}
	printf("%d %d", Min, Max);

	return 0;
}