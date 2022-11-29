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
void evenAfterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL){
        even->next=NULL;
    }
}
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    head=n;
    return;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;

}
void insertAtTail(node* &head,int val){
    node* temp=head;
    if(head==NULL){
        insertAtHead(head,val);
    }
    node* n=new node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}
int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        insertAtTail(head,arr[i]);
    }
    evenAfterodd(head);
    display(head);
    return 0;
}