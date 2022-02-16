#include <iostream>
#include <string> 
#include "LAST_DIGIT_OF_A_NUMBER.h"
using namespace std;

int main()
{

    cout << "Input an interger \n";
    int input = 137;
    cin >> input;

    auto textInput = to_string(input);

    char lastDigit = textInput[textInput.length() - 1];
    string seperated = GetSeperatedDigits(textInput);
    string reversed = GetReversedDigits(textInput);

    cout << lastDigit <<" last digit \n" 
        << seperated << " seprated numbers \n"
        << reversed << " reversed digits \n";
}

string GetSeperatedDigits(string& textInput)
{
    string seperated = "";
    for (size_t i = 0; i < textInput.length(); i++)
    {
        auto digit = textInput[i];
        seperated += digit;
        seperated += ' ';
    }
    return seperated;
}

string GetReversedDigits(string& textInput)
{
    string seperated = "";
    for (int i = textInput.length() - 1; i >= 0; i--)
    {
        auto digit = textInput[i];
        seperated += digit;
    }
    return seperated;
}
