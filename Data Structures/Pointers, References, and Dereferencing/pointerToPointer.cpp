#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p; // pp is a pointer to a pointer to int

    cout << "Value of a: " << a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of pp: " << pp << endl;
    cout << "Value pointed to by p: " << *p << endl;
    cout << "Value pointed to by pp: " << *pp << endl;
    cout << "Value pointed to by the pointer that pp points to: " << **pp << endl; // Dereferencing twice

    return 0;
}
