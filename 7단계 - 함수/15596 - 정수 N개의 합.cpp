#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	unsigned int Size = a.size();
	for (int i = 0; i < Size; ++i)
	{
		ans += a[i];
	}
	return ans;
}
