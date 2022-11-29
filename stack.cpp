#include<iostream>
using namespace std;
#define n 100;
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
};
void push(int val){
    if(top==-1){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=val;
}
int main(){
    stack st;
    st.push(1);
    
}
