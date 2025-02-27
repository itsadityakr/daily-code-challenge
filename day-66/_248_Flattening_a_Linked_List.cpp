// https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1

/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
    public:
        Node* merge(Node* a, Node* b) {
            if (a == nullptr) return b;
            if (b == nullptr) return a;
    
            Node* result;
            if (a->data < b->data) {
                result = a;
                result->bottom = merge(a->bottom, b);
            } else {
                result = b;
                result->bottom = merge(a, b->bottom);
            }
    
            result->next = nullptr;
            return result;
        }
    
        Node* flatten(Node* root) {
            if (root == nullptr || root->next == nullptr) {
                return root;
            }
    
            root->next = flatten(root->next);
            root = merge(root, root->next);
    
            return root;
        }
    };