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
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;

    }
    slow->next=NULL;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
  int  count=1;
  while(temp->next!=NULL){
      if(count==pos){
          temp->next=startNode;
      }
      temp=temp->next;
      count++;
  }
  temp->next=startNode;
}
bool detectcycle(node * &head){
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;

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
    makecycle(n1,3);
    cout<<detectcycle(n1)<<endl;
    removecycle(n1);
    display(n1);
    
    return 0;

}