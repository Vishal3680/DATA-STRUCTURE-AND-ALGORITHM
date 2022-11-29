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
node* recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    node* newhead=recursive(n1);
    display(newhead);
    return 0;

}