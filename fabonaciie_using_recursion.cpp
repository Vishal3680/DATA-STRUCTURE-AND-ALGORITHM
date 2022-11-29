#include<iostream>
using namespace std;
int fabonaciie(int n){
    if(n==0 ||n==1){
        return n;
    }
    return fabonaciie(n-1)+fabonaciie(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fabonaciie(n)<<endl;
    return 0;
}