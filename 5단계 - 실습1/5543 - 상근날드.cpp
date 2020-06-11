#include <cstdio>
#define MAX_BURGER 3
#define MAX_DRINK 2

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int maxCount = MAX_BURGER + MAX_DRINK;
	int sum = 0;
	int* price = new int[maxCount];
	for (int i = 0; i < maxCount; ++i)
	{
		scanf("%d", &price[i]);
	}
	sum = min(price[0], min(price[1], price[2])) + min(price[3], price[4]) - 50;
	printf("%d", sum);
	delete[] price;
}