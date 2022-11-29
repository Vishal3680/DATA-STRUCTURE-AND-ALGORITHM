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
node* merge(node* &head1,node* &head2){
  node* p1=head1;
  node* p2=head2;
  node* dummynode=new node(-1);
  node* p3=dummynode;
  while(p1->next!=NULL && p2->next!=NULL){
    if(p1->data<p2->data){
        p3->next=p1;
        p1=p1->next;
    }
    else{
        p3->next=p2;
        p2=p2->next;
    }
    p3=p3->next;
  }
  while(p1->next!=NULL){
    p3->next=p1;
    p3=p3->next;
  }
  while(p2->next!=NULL){
    p3->next=p2;
    p3=p3->next;
  }
  return dummynode->next;
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
    node* head1;
    node* head2;
    int arr[]={1,2,3,4,6};
    int arr1[]={5,7,8};
    for(int i=0;i<5;i++){
        insertAtlast(head1,arr[i]);
    }
    for(int j=0;j<3;j++){
        insertAtlast(head2,arr1[j]);
    }
    display(head1);
    display(head2);
    node* newHead=merge(head1,head2);
    display(newHead);
return 0;
}