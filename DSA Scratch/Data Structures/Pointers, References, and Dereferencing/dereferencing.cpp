#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Value pointed to by p: " << *p << endl; // Dereferencing p

    *p = 20; // Changing the value pointed to by p

    cout << "New value of a: " << a << endl;

    return 0;
}
