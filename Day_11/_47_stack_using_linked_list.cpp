#include <iostream>
using namespace std;

class StackNode
{
private:
    int data;
    StackNode *next;

    StackNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    StackNode *top;

public:
    StackNode()
    {
        top = nullptr;
    }

    void push(int x)
    {
        StackNode *newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }
    int pop()
    {
        if (top == nullptr)
        {
            std::cout << "Stack Underflow" << std::endl;
            return 0;
        }
        StackNode *temp = top;
        top = top->next;
        int popped = temp->data;
        delete temp;
        return popped;
    }

    int peek()
    {
        if (top == nullptr)
        {
            std::cout << "Stack is Empty" << std::endl;
            return 0;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }
};

int main()
{
    StackNode stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;
    cout << "Pop element: " << stack.pop() << endl;
    cout << "Top element: " << stack.peek() << endl;

    return 0;
}