#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
	char str[100];
	scanf("%s", str);

	vector<int> word;
	word.resize('z' - 'a' + 1, -1);

	for (size_t i = 0; i < strlen(str); ++i)
	{
		int index = str[i] - 'a';
		word[index] = word[index] < 0 ? i : word[index];
	}

	for (auto spell : word)
		printf("%d ", spell);
}