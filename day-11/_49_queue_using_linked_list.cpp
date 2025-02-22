#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(int item)
    {
        Node *newNode = new Node(item);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        int value = front->data;
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
        return value;
    }

    int getFront()
    {
        return isEmpty() ? -1 : front->data;
    }

    int getRear()
    {
        return isEmpty() ? -1 : rear->data;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
    return 0;
}
