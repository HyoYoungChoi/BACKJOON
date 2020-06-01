#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;
	if (90 <= A)
		cout << "A";
	else if (80 <= A)
		cout << "B";
	else if (70 <= A)
		cout << "C";
	else if (60 <= A)
		cout << "D";
	else
		cout << "F";
}