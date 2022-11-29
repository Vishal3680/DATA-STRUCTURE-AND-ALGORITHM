#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* nextPtr=NULL;
    node* prevPtr=NULL;
    node(int val){
        data=val;
       nextPtr=NULL;
       prevPtr=NULL;
    }
}