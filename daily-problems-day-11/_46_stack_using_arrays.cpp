#include <iostream>
#define MAX 1000
using namespace std;

class Stack
{
private:
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
    }
    
    bool push(int x)
    {
        if (top >= (MAX - 1))
        {
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop()
    {
        if (top < 0)
        {
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if (top < 0)
        {
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return (top < 0);
    }

    int size()
    {
        return top + 1;
    }

    void traverse()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();

    stack.traverse();
    return 0;
}