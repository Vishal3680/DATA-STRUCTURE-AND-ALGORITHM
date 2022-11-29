#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int topEle){
    if(st.empty()){
     st.push(topEle);
     return;
    }
 int Ele=st.top();
 st.pop();
 
 insertAtBottom(st,topEle);
 st.push(Ele);

}
void reverse(stack<int>&st){
   int topEle= st.top();
    if(st.empty()){
        return;
    }
   st.pop();
   reverse(st);
   insertAtBottom(st,topEle);
}
int main(){
  stack<int>st;
  st.push(4);
  st.push(3);
  st.push(2);
  st.push(1);
  reverse(st);
  return 0;
}