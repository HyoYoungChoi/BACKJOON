#include <cstdio>

int main()
{
	int A, B;

	while (true)
	{
		scanf("%d%d", &A, &B);
		if (!A && !B)
			break;

		printf("%d\n", A + B);
	}
	return 0;
}