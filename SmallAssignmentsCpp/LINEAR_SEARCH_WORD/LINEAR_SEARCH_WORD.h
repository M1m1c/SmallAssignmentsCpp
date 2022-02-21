#pragma once

const int maxSentenceLength = 100;
const int maxWordLength = 20;
const int maxWordsInSentence = 20;

void CollectWordsFromSentence(int currentSentenceLength, std::string(&wordsInSentence)[20], char(&sentence)[100]);

bool CompareWithSearchWord(char (&searchWord)[20], std::string& tempWord);

int GetCurrentSentenceLength(int sentenceLength, char (&sentence)[100]);

std::string GetWordInSentence(int& i, int length, char(&sentence)[100]);