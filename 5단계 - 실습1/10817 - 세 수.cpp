#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A < B)
	{
		int Temp = B;
		B = A;
		A = Temp;
	}

	if (B < C)
	{
		int Temp = C;
		C = B;
		B = Temp;
	}

	if (A < B)
	{
		int Temp = B;
		B = A;
		A = Temp;
	}

	cout << B << endl;
	return 0;
}