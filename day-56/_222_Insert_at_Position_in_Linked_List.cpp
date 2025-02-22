struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
}

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtPosition(int val, int pos)
    {
        Node *newNode = new Node(val);
        if (pos == 1 || pos < 1)
        {
            newNode->next = head;
            head = newNode;
        }
        Node *temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            cout << "pos out of bounds";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}