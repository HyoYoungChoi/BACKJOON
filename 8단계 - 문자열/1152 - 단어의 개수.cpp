#include <cstdio>

int main()
{
	char str[1000001];
	int count = 1;
	int length = 0;

	scanf("%[^\n]s", str);

	for (length = 0; str[length] != '\0'; ++length)
	{
		if ((str[length] == ' ') && (length == 0))
		{
			continue;
		}

		if ((str[length] == ' '))
			++count;
	}

	if (str[length - 1] == ' ')
	{
		--count;
	}

	printf("%d", count);
}