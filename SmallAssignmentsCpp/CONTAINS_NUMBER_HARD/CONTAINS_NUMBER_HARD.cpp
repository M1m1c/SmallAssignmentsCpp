#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int a = 3;
    int b = 2034;
    string aText = to_string(a);
    string bText = to_string(b);

    bool match = false;
    for (int i = 0; i < bText.size(); i++)
    {
        auto bChar = bText[i];
        if (bChar == aText[0])
        {
            match = true;
          
            break;
        }
    }

    if (match) 
    {
        cout << "the digit " << a << " was found in the number " << b;
    }
    else
    {
        cout << "no number in "<< b <<" matched the digit " << a;
    }
}

