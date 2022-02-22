#include <iostream>
#include <vector>
#include "PERMUTATION_HARD.h"

int main()
{
	std::string word = "bug";
	int length = word.length();
	std::vector<std::string> permutations;

	GetPermutationsOfWord(permutations, word, 0, length - 1);

	for (auto item : permutations)
	{
		std::cout << item << "\n";
	}
}

void GetPermutationsOfWord(std::vector<std::string>& permutations, std::string text, int frontIndex, int backIndex)
{
	if (frontIndex == backIndex)
	{
		//Does not collect duplicate combinaitons in case of duplicate letters in word.
		if (IsPermDuplicate(permutations, text) != true)
		{
			permutations.push_back(text);
		}

		return;
	}

	for (int i = frontIndex; i <= backIndex; i++)
	{
		std::swap(text[frontIndex], text[i]);

		GetPermutationsOfWord(permutations, text, frontIndex + 1, backIndex);

		std::swap(text[frontIndex], text[i]);
	}

}

bool IsPermDuplicate(std::vector<std::string>& permutations, std::string text)
{
	auto retval = false;
	for (int i = 0; i < permutations.size(); i++)
	{
		if (text == permutations[i])
		{
			retval = true;
			break;
		}
	}
	return retval;
}
