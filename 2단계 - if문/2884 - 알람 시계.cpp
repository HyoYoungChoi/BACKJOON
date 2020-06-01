#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	M = M - 45;
	if (0 > M)
	{
		--H;
		M = 60 + M;
	}

	if (0 > H)
		H = 24 + H;

	cout << H << " " << M;
}