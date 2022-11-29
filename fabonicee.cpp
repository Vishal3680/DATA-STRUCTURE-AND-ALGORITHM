#include<iostream>
using namespace std;
void fab(int n){
    int num1=0;
    int num2=1;
    int nextterm;
    for(int i=0;i<n;i++){
        cout<<num1<<endl;
        nextterm=num1+num2;
        num1=num2;
        num2=nextterm;
    }
    return ;
}

int main(){
   int n;
   cin>>n;
   fab(n);

    return 0;
}