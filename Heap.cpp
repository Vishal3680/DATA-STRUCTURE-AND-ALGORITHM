#include<iostream>
using namespace std;
int main(){
    int *p=new int();//Allocate memory in heap 
    *p=20;
    delete(p); //Deallocate memory in heap
    int *ptr= new int[4];
    delete[]p;
    p=NULL;
    return 0;             
}