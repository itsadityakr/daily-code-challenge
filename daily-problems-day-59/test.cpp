#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LL
{
    public:
    Node *head;

    LL(){
        head = nullptr;
    }

    void push_front(int value){
        Node *newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int value){
        Node *newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        head = newNode->next;
        newNode->next = nullptr;
    }

    void traverse(){
        Node *temp = head;
        while (temp != nullptr){
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout <<"NULL";
        delete temp;
    }
};


int main()
{
    LL list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.push_back(5);
    list.push_back(6);
    list.traverse();
    return 0;
}