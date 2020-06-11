#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int T, Score = 0, Sum = 0;
	string A;

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> A;

		for (int j = 0; j < A.length(); ++j)
		{
			if (A[j] == 'O')
			{
				++Score;
				Sum += Score;
			}
			else
				Score = 0;
		}
		cin.tie(NULL);
		cout << Sum << "\n";
		Score = Sum = 0;
	}
	return 0;
}