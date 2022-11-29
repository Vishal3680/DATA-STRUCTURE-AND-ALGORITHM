#include<iostream>
using namespace std;
void prime(int n1,int n2){
    for(int i=n1;i<n2;i++){
        if(i%2!=0){
        cout<<i<<" ";
        }
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    prime(n1,n2);
    return 0;
}