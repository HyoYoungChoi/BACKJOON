#include <cstdio>
#include <vector>

bool Aberration(int iNum)
{
	if (iNum < 100)
		return true;

	std::vector<int> vecNum;
	while (iNum != 0)
	{
		vecNum.push_back(iNum % 10);
		iNum /= 10;
	}

	int temp = vecNum[0] - vecNum[1];
	for (int i = 1; i < vecNum.size(); ++i)
	{
		if (temp != vecNum[i - 1] - vecNum[i])
			return false;
	}
	return true;
}

int main()
{
	int N;
	scanf("%d", &N);
	int sum = 0;
	for (int i = 1; i <= N; ++i)
	{
		if (Aberration(i))
			++sum;
	}
	printf("%d", sum);
}