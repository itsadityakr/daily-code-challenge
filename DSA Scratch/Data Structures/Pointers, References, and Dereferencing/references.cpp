#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &ref = a; // ref is a reference to a

    cout << "Value of a: " << a << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 20; // Changing the value of ref changes the value of a

    cout << "New value of a: " << a << endl;
    cout << "New value of ref: " << ref << endl;

    return 0;
}
