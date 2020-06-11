#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf(" ");
		}
		for (int j = num - i; j > 0; --j)
		{
			printf("*");
		}
		for (int j = num - i; j > 1; --j)
		{
			printf("*");
		}
		printf(" \n");
	}

	for (int i = num - 2; i >= 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf(" ");
		}
		for (int j = num - i; j > 1; --j)
		{
			printf("*");
		}
		for (int j = num - i; j > 0; --j)
		{
			printf("*");
		}
		printf(" \n");
	}
}