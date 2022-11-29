#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;
   
    
    node(int x){
        data=x;
        next=NULL;


    }
};
class queue{
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node * n=new node(x);
        back->next=n;
        back=n;
    }
};