#include <cstdio>
#include <cstring>

int main()
{
	int iCaseNum;
	scanf("%d", &iCaseNum);

	for (int i = 0; i < iCaseNum; ++i)
	{
		int num;
		char str[21];
		scanf("%d %s", &num, str);
		for (size_t j = 0; j < strlen(str); ++j)
		{
			for (int k = 0; k < num; ++k)
				printf("%c", str[j]);
		}
		printf("\n");
	}
}