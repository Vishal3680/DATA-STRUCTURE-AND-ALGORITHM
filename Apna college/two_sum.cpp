#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int>A(n);
    for(int i=0;i<n;i++){
    cin>>A[i];

    }
    sort(A.begin(),A.end());
    bool found=false;
    int lo=0,hi=n-1;
    for(int i=0;i<n;i++){
        int currentsum=A[i]+A[lo]+A[hi];
        if(currentsum==target){
            found=true;
        }
        else if(currentsum<target){
            lo++;
        }
        else{
            hi--;
        }
    }
    if(found){
        cout<<"True"<<endl;

    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}