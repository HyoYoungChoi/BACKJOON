#include <cstdio>

int main()
{
	int A;

	int Array[42] = { };

	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &A);

		++Array[A % 42];
	}

	int Count = 0;
	for (int i = 0; i < 42; ++i)
	{
		if (Array[i])
			++Count;
	}
	printf("%d", Count);

	return 0;
}