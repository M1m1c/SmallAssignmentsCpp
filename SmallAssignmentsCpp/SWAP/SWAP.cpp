#include <iostream>
#include "SWAP.h"

int main()
{
	int x = 0;
	int y = 0;

	int& xRef = x;
	int& yRef = y;

	int* xPointer = &x;
	int* yPointer = &y;

	std::cout << "input an integer\n";
	std::cin >> x;

	std::cout << "input another integer\n";
	std::cin >> y;

	std::cout << "\nx = " << x << " y = " << y << " -original input\n";

	SwapWithRef(xRef, yRef);
	std::cout << "x = " << x << " y = " << y << " -swap with reference\n";

	SwapWithPointer(xPointer, yPointer);
	std::cout << "x = " << x << " y = " << y << " -swap with pointer\n";

	std::swap(x, y);
	std::cout << "x = " << x << " y = " << y << " -swap with STL\n";

	x = x + y;
	y = x - y;
	x = x - y;
	std::cout << "x = " << x << " y = " << y << " -swap with math\n";

}

void SwapWithPointer(int* xPointer, int* yPointer)
{
	int temp = *xPointer;
	*xPointer = *yPointer;
	*yPointer = temp;
}

void SwapWithRef(int& xref, int& yref)
{
	int temp = xref;
	xref = yref;
	yref = temp;
}
