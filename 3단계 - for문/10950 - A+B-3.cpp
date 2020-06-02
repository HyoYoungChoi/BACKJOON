#include <iostream>
using namespace std;

int main()
{
	int Number;
	int A, B;
	cin >> Number;

	for (int i = 0; i < Number; ++i)
	{
		cin >> A >> B;
		cout << A + B << endl;
	}
	return 0;

}