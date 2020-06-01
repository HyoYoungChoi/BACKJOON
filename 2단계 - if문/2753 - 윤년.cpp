#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;

	if (!(A % 4) && ((A % 100) || !(A % 400)))
		cout << "1";
	else
		cout << "0";
}