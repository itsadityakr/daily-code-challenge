#include <iostream>
#include <limits>

int main() {
    // Integer types
    int intVar = 10;
    unsigned int uintVar = 20;
    short shortVar = 30;
    unsigned short ushortVar = 40;
    long longVar = 50;
    unsigned long ulongVar = 60;
    long long longlongVar = 70;
    unsigned long long ulonglongVar = 80;

    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    long double longdoubleVar = 1.41421356237;

    // Character types
    char charVar = 'A';
    unsigned char ucharVar = 'B';

    // Boolean type
    bool boolVar = true;

    // Output values
    std::cout << "Integer types:" << std::endl;
    std::cout << "intVar: " << intVar << std::endl;
    std::cout << "uintVar: " << uintVar << std::endl;
    std::cout << "shortVar: " << shortVar << std::endl;
    std::cout << "ushortVar: " << ushortVar << std::endl;
    std::cout << "longVar: " << longVar << std::endl;
    std::cout << "ulongVar: " << ulongVar << std::endl;
    std::cout << "longlongVar: " << longlongVar << std::endl;
    std::cout << "ulonglongVar: " << ulonglongVar << std::endl;

    std::cout << "\nFloating-point types:" << std::endl;
    std::cout << "floatVar: " << floatVar << std::endl;
    std::cout << "doubleVar: " << doubleVar << std::endl;
    std::cout << "longdoubleVar: " << longdoubleVar << std::endl;

    std::cout << "\nCharacter types:" << std::endl;
    std::cout << "charVar: " << charVar << std::endl;
    std::cout << "ucharVar: " << ucharVar << std::endl;

    std::cout << "\nBoolean type:" << std::endl;
    std::cout << "boolVar: " << std::boolalpha << boolVar << std::endl;

    // Implicit type conversion examples
    intVar = floatVar;  // Implicit conversion from float to int
    doubleVar = intVar; // Implicit conversion from int to double
    shortVar = charVar; // Implicit conversion from char to short

    // Explicit type conversion examples
    doubleVar = static_cast<double>(longVar); // Explicit conversion from long to double
    intVar = static_cast<int>(doubleVar);     // Explicit conversion from double to int

    std::cout << "\nAfter conversions:" << std::endl;
    std::cout << "intVar (after float to int): " << intVar << std::endl;
    std::cout << "doubleVar (after int to double): " << doubleVar << std::endl;
    std::cout << "shortVar (after char to short): " << shortVar << std::endl;

    return 0;
}
