#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int C;
	cin >> C;

	for (int i = 0; i < C; ++i)
	{
		int Max, Sum = 0, Stu = 0;
		cin >> Max;
		int* Pass = new int[Max];

		for (int j = 0; j < Max; ++j)
		{
			cin >> Pass[j];
			Sum += Pass[j];
		}

		double Avarage = (double)(Sum) / Max;
		for (int j = 0; j < Max; ++j)
		{
			if (Avarage < Pass[j])
				++Stu;

		}
		cout.precision(3);
		cout << fixed << ((double)(Stu) / Max) * 100 << "%" << "\n";
		Sum = 0;
		Stu = 0;
		delete[] Pass;
	}
	return 0;
}