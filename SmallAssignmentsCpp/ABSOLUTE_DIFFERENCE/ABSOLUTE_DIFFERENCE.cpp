#include <iostream>

int Abs(int value)
{
	return value < 0 ? value * -1 : value;
}

int main()
{
	int x = 0;
	int y = 0;

	std::cout << "input an integer\n";
	std::cin >> x;

	std::cout << "input another integer\n";
	std::cin >> y;
	std::cout << Abs(x) + Abs(y) << " is the absolute differnece \n";
}