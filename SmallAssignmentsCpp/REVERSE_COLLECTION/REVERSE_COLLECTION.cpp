#include <iostream>
#include <string>

int main()
{
    std::cout << "enter a string that will get reversed \n";
    std::string input;

    std::cin >> input;

    std::string reverse;

    for (int i = input.length() - 1; i >= 0; i--)
    {
        reverse += input[i];
    }
    std::cout << reverse << "\n";
}
