#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
    
    };
    void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n=n->next;
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void display(node* head){
    node* temp=head;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    node* n=new node(val);
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
    int main(){
        node* head=NULL;
        insertAtTail(head,1);
        insertAtTail(head,2);
        insertAtTail(head,3);
        insertAtTail(head,4);
        insertAtTail(head,5);
        display(head);
        return 0;
    }