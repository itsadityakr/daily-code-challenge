#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a; // p is a pointer to int, holding the address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (address of a): " << p << endl;
    cout << "Value pointed to by p: " << *p << endl; // Dereferencing p

//      Value of a: 10
//      Address of a: 0x4f5f9ffc64
//      Value of p (address of a): 0x4f5f9ffc64
//      Value pointed to by p: 10

    return 0;
}