#include<iostream>
using namespace std;
class node {
public:
int data;
node* next;
 node(int val){
     data=val;
     next=NULL;

}
};
node* reverse(node* &head){
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;
    while(currPtr!=NULL){
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;
        prevPtr=currPtr;
        currPtr=nextPtr;
    }
    head=prevPtr;
    return head;
}

void insertAtlast(node * &head,int val){
    node* temp=head;
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* n1=NULL;
    insertAtlast(n1,1);
    insertAtlast(n1,2);
    insertAtlast(n1,3);
    display(n1);
    node* newhead=reverse(n1);
    display(newhead);
    return 0;

}