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
int length(node* head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;

}
node* k_nodes(node* &head,int k){
    node* tail=head;
    node* newHead;
    node* newTail;
    int l=length(head);
    k=k%l;
    int count=0;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
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
    
    insertAtlast(n1,4);
    insertAtlast(n1,5);
    insertAtlast(n1,6);
    node * newHead=k_nodes(n1,2);
    display(newHead);

    return 1;
    }