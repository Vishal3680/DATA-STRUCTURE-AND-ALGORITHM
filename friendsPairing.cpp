#include<iostream>
using namespace std;
int freindspairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return freindspairing(n-1)+freindspairing(n-2)*(n-1);
}
int main(){
    cout<<freindspairing(3)<<endl;
    return 0;
}