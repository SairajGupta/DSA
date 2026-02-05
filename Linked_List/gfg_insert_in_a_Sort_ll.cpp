/*
structure of the node of the list is as
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

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* temp=head;
        Node* node= new Node(key);
        if (head==nullptr || head->data > key){
            node-> next = head;
            head = node;
            return head;
        }
        while (temp->next != nullptr && temp->next->data < key) {
            temp = temp->next;
        }
        Node* temp2 = temp->next;
        temp->next= node;
        node->next= temp2;
        return head;
        
    }
};