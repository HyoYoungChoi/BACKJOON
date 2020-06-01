//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//
//	int num;
//	if (y > 0)
//	{
//		if (x > 0)
//			num = 1;
//		else
//			num = 2;
//	}
//	else
//	{
//		if (x > 0)
//			num = 4;
//		else
//			num = 3;
//	}
//	cout << num;
//}
#include <cstdio>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", (x*y > 0) ? ((x > 0) ? 1 : 3) : ((x < 0) ? 2 : 4));
}