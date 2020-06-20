#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	char word[1000000];
	scanf("%s", word);

	vector<int> alphabet;
	alphabet.resize('z' - 'a' + 1, 0);

	for (int i = 0; word[i] != '\0'; ++i)
	{
		int index = word[i];
		index += (index < 'a') ? 32 : 0;
		index -= 'a';

		++alphabet[index];
	}

	int iMaxNum = -1;
	char printAlphabet;
	for (int i = 0; i < alphabet.size(); ++i)
	{
		if (iMaxNum < alphabet[i])
		{
			iMaxNum = alphabet[i];
			printAlphabet = i + 'A';
		}
		else if (iMaxNum == alphabet[i])
		{
			printAlphabet = '?';
		}
	}
	printf("%c", printAlphabet);
}