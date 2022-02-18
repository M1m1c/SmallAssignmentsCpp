#include <iostream>
#include <vector>
#include <string>
#include "LUCKY_NUMBER.h"

int main()
{
	int input = 1224;
	DisplayLuckyNumber(input);

	input = 5678;
	DisplayLuckyNumber(input);

}

void DisplayLuckyNumber(int input)
{
	if (CheckUniqueNumbers(input))
	{
		std::cout << input << " is a lucky number with only unique numbers \n";
	}
	else
	{
		std::cout << input << " is not a lucky number since it has duplicate numbers \n";
	}
}

bool CheckUniqueNumbers(int input)
{

	std::string characters = std::to_string(input);
	bool retval = true;
	std::string compare;
	for (int i = 0; i < characters.size(); i++)
	{
		if (compare.size() == 0)
		{
			compare += characters[i];
			continue;
		}

		for (int g = 0; g < compare.size(); g++)
		{
			if (compare[g] == characters[i]) {
				retval = false;
				break;
			}
		}

		compare += characters[i];
	}
	return retval;
}
