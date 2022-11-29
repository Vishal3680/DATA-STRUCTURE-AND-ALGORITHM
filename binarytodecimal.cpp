#include<bits/stdc++.h>
using namespace std;
int binaryTodecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
         ans+=x*lastdigit;
        x*=2;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryTodecimal(n)<<endl;
}