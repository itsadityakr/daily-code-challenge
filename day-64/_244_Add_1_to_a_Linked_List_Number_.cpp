// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    Node *addOne(Node *head)
    {
        head = reverse(head);

        Node *current = head;
        int carry = 1; // We need to add 1

        while (current != nullptr)
        {
            int sum = current->data + carry;
            current->data = sum % 10;
            carry = sum / 10;

            if (carry == 0)
                break;
            if (current->next == nullptr && carry > 0)
            {
                current->next = new Node(carry);
                carry = 0;
            }
            current = current->next;
        }

        return reverse(head);
    }
};