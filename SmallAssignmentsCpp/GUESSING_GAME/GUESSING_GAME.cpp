#include <iostream>
#include "GUESSING_GAME.h"

int main()
{	
	srand(time(NULL));

	while (isPlaying)
	{
		int secretNumber = min + (std::rand() % (max - min + 1));
		std::cout << "guess the secret number between " << min << " and " << max << "\n";

		int input = -1;
		int tries = 0;
		InputNumberGuess(input, secretNumber, tries);

		std::cout << "you guessed correctly, the secret number was " << secretNumber << "\n" <<
			"it took you " << tries << " tries \n";

		CheckPlayAgain();
	}
	
}

void InputNumberGuess(int& input, int secretNumber, int& tries)
{
	while (input != secretNumber)
	{
		std::cout << "input an integer\n";

		CheckIntInput(input);

		if (input != secretNumber)
		{
			std::cout << "wrong guess\n";
			tries++;
		}
	}
}

void CheckIntInput(int& input)
{
	while (!(std::cin >> input)) {
		std::cin.clear();
		std::cin.ignore(max + 1, '\n');
		std::cin.ignore(min - 1, '\n');
		std::cout << "Invalid input try again. \n";
	}
}

void CheckPlayAgain()
{
	char selection;
	while (true)
	{
		std::cout << "would you like to play again [y/n] \n";
		std::cin >> selection;
		if (!std::cin.fail() && selection != 'y' && selection != 'n') { continue; }

		if (selection == 'n') {
			isPlaying = false;
		}
		return;
	}
}
