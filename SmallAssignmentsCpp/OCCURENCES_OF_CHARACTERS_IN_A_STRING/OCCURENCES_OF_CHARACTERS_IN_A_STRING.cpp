#include <iostream>
#include <map>

int main()
{
	std::string input = "Everyone was busy, so I went to the movie alone.";
	std::cout << "original sentence= [" << input << "]\n";

	std::map<char, int> letterMap;

	for (auto var : input)
	{
		char uppercaseChar=std::toupper(var);

		if (letterMap.size() > 0)
		{
			auto entry = letterMap.find(uppercaseChar);
			if (entry != letterMap.end())
			{
				entry->second++;
				continue;
			}
		}
		letterMap.insert(std::pair<char, int>(uppercaseChar, 1));
	}

	for (auto var : letterMap)
	{
		std::cout << var.first << " = " << var.second << "\n";
	}
}
