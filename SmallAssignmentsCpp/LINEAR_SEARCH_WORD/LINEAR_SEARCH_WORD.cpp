#include <iostream>
#include "LINEAR_SEARCH_WORD.h"


//TODO debug and refactor before submitting
//Make sure that we did not use any built in funcitons
int main()
{
	std::cout << "please write a sentence \n";
	char sentence[maxSentenceLength] = {};
	std::cin.getline(sentence, maxSentenceLength);

	std::cout << "please write a word that should be searched for \n";
	char searchWord[maxWordLength] = {};
	std::cin.getline(searchWord, maxWordLength);

	int currentSentenceLength = GetCurrentWordLength(maxSentenceLength, sentence);

	std::string wordsInSentence[maxWordsInSentence];
	CollectWordsFromSentence(currentSentenceLength, wordsInSentence, sentence);

	for (auto i = 0; i < maxWordsInSentence; i++)
	{
		auto tempWord = wordsInSentence[i];
		if (tempWord == "") 
		{
			std::cout << searchWord << " was not found in the sentence \n";
			break; 
		}
		else if (CompareWithSearchWord(searchWord, tempWord))
		{
			std::cout << searchWord << " was found in the sentence \n";
			break;
		}
	}
}


void CollectWordsFromSentence(int currentSentenceLength, std::string(&wordsInSentence)[20], char(&sentence)[100])
{
	int wordIndex = 0;
	for (int i = 0; i < currentSentenceLength; i++)
	{
		wordsInSentence[wordIndex] = GetWordInSentence(i, currentSentenceLength, sentence);
		wordIndex++;
	}
}

bool CompareWithSearchWord(char(&searchWord)[20], std::string& tempWord)
{
	bool retval = false;
	for (int i = 0; i < maxWordLength; i++)
	{
		if (i > tempWord.size()) { break; }

		auto compare = tempWord[i];
		auto search = searchWord[i];
		if (search == NULL || compare == NULL) { break; }

		if (search == compare)
		{
			retval = true;
		}
		else
		{
			retval = false;
			break;
		}
	}
	return retval;
}

int GetCurrentWordLength(int sentenceLength, char(&sentence)[100])
{
	int currentLength = 0;
	for (int i = 0; i < sentenceLength; i++)
	{
		if (sentence[i] == NULL) { break; }
		currentLength++;
	}
	return currentLength;
}

std::string GetWordInSentence(int& i, int length, char(&sentence)[100])
{
	std::string retval;
	int steps = -1;
	for (int g = i; g <= length; g++)
	{
		char var = sentence[g];
		if (g == length || var == ' ' || var == ',' || var == '.')
		{
			i = g;
			break;
		}
		else
		{
			steps++;
			retval += var;
		}
	}

	return retval;
}