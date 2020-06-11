#include <cstdio>

int main()
{
	int sum = 0, count = 0, score = 0;
	while (EOF != scanf("%d", &score))
	{
		sum += (40 > score) ? 40 : score;
		++count;
	}
	printf("%d", sum / count);
}