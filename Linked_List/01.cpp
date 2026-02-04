#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next= NULL;
    }
};


void insert(Node* &head,int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = node;
}

void insertatBegin(Node* &head,int val){
    Node* node = new Node(val);

    node->next = head;
    head = node;

}

void printLL(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"Null"<<endl;

}
void insertatPos(Node* &head,int pos,int val){
    if(pos==1){
        insertatBegin(head,val);
        return;
    }
    Node* node= new Node(val);
    Node* temp=head;
    for(int i=1;i<pos-1 && temp != NULL;i++){
        temp=temp->next;
    }
    Node* temp2=temp->next;
    temp->next = node;
    node->next = temp2;

}
void deleteatPos(Node* &head,int pos){
    if(head==NULL) return;
    Node* temp = head;
    if(pos=1){
        head=head->next;
        delete temp;
    }
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}
int main(){
    Node* head = NULL;
    insert(head,5);
    insert(head,6);
    insertatBegin(head,4);
    insertatBegin(head,3);
    insertatBegin(head,2);
    insertatBegin(head,1);
    printLL(head);
    insertatPos(head,4,0);
    printLL(head);
    insertatPos(head,1,0);
    printLL(head);
    deleteatPos(head,5);
    insert(head,7);
    printLL(head);
}