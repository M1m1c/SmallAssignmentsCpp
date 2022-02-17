#pragma once

int min = 0;
int max = 10;
bool isPlaying = true;

void InputNumberGuess(int& input, int secretNumber, int& tries);

void CheckIntInput(int& input);

void CheckPlayAgain();
