#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void insertatEnd(Node* &head,int val){
    Node* node = new Node(val);

    if(head==nullptr){
        head=node;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next= node;
    node->prev=temp;

}

void insertatBegin(Node* head,int val){
    Node* node = new Node(val);
    head->prev = node;
    node->next = head;
    head = node;

}

void printdll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->next<<" -> ";
    }
    cout<<"Null"<<endl;
}

void inseratPos(Node* head,int val,int pos){
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
int main(){
    
}