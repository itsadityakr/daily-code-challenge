#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int size;

public:
    Queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    void enqueue(int item)
    {
        if (isFull())
            return;
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        return arr[rear];
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
    return 0;
}
