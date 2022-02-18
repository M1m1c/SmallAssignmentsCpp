#include <iostream>
#include "FIBONACCI_NUMBERS.h"

int main()
{

	std::cout << "input an integer to count the fibbonaci sequence\n";
	int input = 0;
	std::cin >> input;

	for (int i = 0; i <= input; i++)
	{
		std::cout << FibonacciIterative(i) << " ";
	}
	std::cout << " -Itterative\n";

	for (int i = 0; i <= input; i++)
	{
		std::cout << FibonacciRecursive(i) << " ";
	}
	std::cout << " -Recursive\n";

}

int FibonacciIterative(int x)
{
	int retval = 0;

	if (x == 1) { retval += 1; }

	if (x != 0)
	{
		int firstNum = 0;
		int nextNum = 1;
		for (int i = 2; i <= x; i++)
		{
			retval = firstNum + nextNum;
			firstNum = nextNum;
			nextNum = retval;
		}
	}

	return retval;
}

int FibonacciRecursive(int x)
{
	if (x == 0) { return 0; }
	if (x == 1) { return 1; }
	return FibonacciRecursive(x - 1) + FibonacciRecursive(x - 2);
}