#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    void display()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main()
{
    Point p(10, 20);
    Point *ptr = &p;

    // Using . operator
    p.display();

    // Using -> operator
    ptr->display();

    // Accessing members directly
    cout << "x: " << ptr->x << ", y: " << ptr->y << endl;

    return 0;
}
