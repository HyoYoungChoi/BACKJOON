#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int Result = 0;
	for (int i = 1; i <= n; ++i)
	{
		Result += i;
	}
	cout << Result << endl;
	return 0;
}