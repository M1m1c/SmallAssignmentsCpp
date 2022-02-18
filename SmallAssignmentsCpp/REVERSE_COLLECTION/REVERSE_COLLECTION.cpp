#include <iostream>
#include <string>

int main()
{
    std::cout << "enter a string that will get reversed \n";
    std::string input;

    std::cin >> input;

    auto length = input.length();
    auto frontIndex = 0;
    for (int i = length - 1; i >= frontIndex; i--)
    {
        auto tempChar = input[i];
        input[i] = input[frontIndex];
        input[frontIndex] = tempChar;
        frontIndex++;
    }

    std::cout << input << "\n";
}
