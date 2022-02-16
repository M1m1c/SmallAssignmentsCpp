#include <iostream>
#include <string> 
using namespace std;

string isEvenOrOdd(int value)
{
	auto textVal = to_string(value);
	auto evenText = textVal + " is an even number";
	auto oddText = textVal + " is an odd number";
	return value % 2 == 0 ? evenText : oddText;
}

int main()
{
	std::cout << "input an integer\n";
	int input = 0;
	std::cin >> input;
	std::cout << isEvenOrOdd(input) << "\n";
}
