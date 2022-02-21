#include <iostream>
#include "SWAP_BITWISE.h"

int main()
{
	int x = 3;
	int y = 7;
    std::cout <<"x= " << x <<" y= "<< y << "\n";
	std::cout << "SWAP\n";
	Swap(x, y);
	std::cout << "x= " << x << " y= " << y << "\n";
}

void Swap(int& x, int& y)
{
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
}
