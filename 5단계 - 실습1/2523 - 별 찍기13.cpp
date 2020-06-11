#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		for (int j = 0; j < i; ++j)
			printf("*");

		printf("\n");
	}
	for (int i = num - 1; i >= 1; --i)
	{
		for (int j = 0; j < i; ++j)
			printf("*");

		printf("\n");
	}
}