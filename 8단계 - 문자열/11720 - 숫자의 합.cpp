#include <cstdio>

int main()
{
	int count, num, sum = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i)
	{
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);
}