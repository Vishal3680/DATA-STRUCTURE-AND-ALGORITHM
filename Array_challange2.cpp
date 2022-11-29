#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int idx[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++)
    a[i]=-1;
    int minidx=INT16_MAX;
    for(int i=0; i<0; i++){
        if(idx[a[i]]!=-1){
minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx== INT16_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<minidx<<endl;
    }
    return 0;
}