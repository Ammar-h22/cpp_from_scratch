#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 4, b = 54, c = 4569;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a is: " << setw(4) << a << endl;
    cout << "The value of b is: " << setw(4) << b << endl;
    cout << "The value of c is: " << setw(4) << c << endl;
    return 0;
}

// setw() is a type of manipulator.
// endl is also one of the type of manipulator in C++.
