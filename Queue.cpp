#include<iostream>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;
    public:
     queue(){
        arr=new int[n];
        front=-1;
        back=-1;
     }
     void push(int a){
        if(back==n-1){
            cout<<"Queue is Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=a;
        if(front==-1){
         front++;
        }
     }
     void pop(){
      if(front==-1 || front>back){
         cout<<"No elements is present in queue"<<endl;
         return;
      }
      front++;
     }
     int peek(){
      if(front==-1 || front>back){
         cout<<"No elements is present in queue"<<endl;
         return -1;
      }
      int x=arr[front];
      front--;
      return x;
     }
     bool isempty(){
        if(front==-1 || front>back){
        return true;
      }
      return false;
     }
};
int main(){
   queue q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   cout<<q.peek()<<endl;
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   cout<<q.isempty()<<endl;
   return 0;

}