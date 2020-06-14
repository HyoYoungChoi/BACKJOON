#include <cstdio>
#include <vector>
#define MAX_NUM 10000

void SelfNumber(int n, std::vector<bool>& vecSelf)
{
	int sum = n;
	do
	{
		sum += (n % 10);
		n /= 10;
	} while (n != 0);

	if (sum > MAX_NUM)
		return;

	if (!vecSelf[sum])
	{
		vecSelf[sum] = true;
		SelfNumber(sum, vecSelf);
	}
}

int main()
{
	std::vector<bool> vecSelfNum;
	vecSelfNum.resize(MAX_NUM + 1);

	for (int i = 1; i <= MAX_NUM; ++i)
	{
		SelfNumber(i, vecSelfNum);
	}

	for (int i = 1; i <= MAX_NUM; ++i)
	{
		if (!vecSelfNum[i])
			printf("%d\n", i);
	}
}