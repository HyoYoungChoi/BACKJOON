#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		for (int j = 0; j < (num); j += 2)
			printf("* ");

		printf("\n");

		for (int j = 1; j < (num); j += 2)
			printf(" *");

		printf("\n");
	}
}