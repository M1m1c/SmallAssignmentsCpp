#pragma once

int EstablishSetsOfNumbers(int i, std::string& input, std::vector<int>& finalNumbers);

void CollectDifferneces(std::vector<int>& finalNumbers, std::vector<int>& differences);

bool CheckIfArithmetic(std::vector<int>& differences);

void AddSetNumberToFinal(std::vector<int>& numberSet, int& steps, std::vector<int>& finalNumbers);
