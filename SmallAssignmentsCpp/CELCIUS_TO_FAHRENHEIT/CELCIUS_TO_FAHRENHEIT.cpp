#include <iostream>

float ToFahrenheit(float celsius) 
{
    return celsius * 9.f / 5.f + 32.f;
}

int main()
{
    float celsius = 36.f;
    std::cout << ToFahrenheit(celsius) << "\n";
}
