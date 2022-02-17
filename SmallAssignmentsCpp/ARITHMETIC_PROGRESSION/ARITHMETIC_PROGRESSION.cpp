#include <iostream>
#include <vector>
#include "ARITHMETIC_PROGRESSION.h"

int main()
{
	std::cout << "type a range of numbers seperated by commas ',' \n";
	std::string input;
	std::cin >> input;

	std::vector<int> finalNumbers;

	for (int i = 0; i < input.length(); i++)
	{
		auto g = EstablishSetsOfNumbers(i, input, finalNumbers);
		i = g;
	}

	std::vector<int> differences;

	CollectDifferneces(finalNumbers, differences);

	if (CheckIfArithmetic(differences)) 
	{
		std::cout << "Sequence has arithmetic progression. \n";
	}
	else 
	{
		std::cout << "Sequence does not have arithmetic progression. \n";
	}
}

bool CheckIfArithmetic(std::vector<int>& differences)
{
	bool retval = true;
	int dif = -1;
	for (int i = 0; i < differences.size(); i++)
	{
		auto value = differences[i];
		if (dif == -1)
		{
			dif = value;
			continue;
		}

		if (value != dif)
		{
			retval = false;
			break;
		}
	}
	return retval;
}

void CollectDifferneces(std::vector<int>& finalNumbers, std::vector<int>& differences)
{
	for (int i = 0; i < finalNumbers.size(); i++)
	{
		auto current = finalNumbers[i];
		int nexIndex = i + 1;
		if (nexIndex >= finalNumbers.size()) { break; }
		auto next = finalNumbers[i + 1];

		differences.push_back(std::abs(next - current));
	}
}

int EstablishSetsOfNumbers(int i, std::string& input, std::vector<int>& finalNumbers)
{
	int retval = 0;
	std::vector<int> numberSet;
	int steps = -1;
	for (int g = i; g <= input.length(); g++)
	{
		char var = g == input.length() ? 0 : input[g];
		if (g == input.length() || var == ',')
		{
			AddSetNumberToFinal(numberSet, steps, finalNumbers);
			retval = g;
			break;
		}
		else
		{

			steps++;
			numberSet.push_back(var - '0');
		}
	}
	return retval;
}

void AddSetNumberToFinal(std::vector<int>& numberSet, int& steps, std::vector<int>& finalNumbers)
{
	int setNumber = 0;
	for (int z = 0; z < numberSet.size(); z++)
	{
		setNumber += numberSet[z] * std::pow(10, steps < 0 ? 0 : steps);
		steps--;
	}
	finalNumbers.push_back(setNumber);
}
