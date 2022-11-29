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
bool search(node * head,int key){
    node * temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
       temp=temp->next;

    }
    return false;
}
void insertAtfirst(node* &head,int val){
  node * n=new node(val);
  n->next=head;
  head=n;
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
    insertAtfirst(n1,4);
    display(n1);
    cout<< search(n1,4)<<endl;

    return 0;
}