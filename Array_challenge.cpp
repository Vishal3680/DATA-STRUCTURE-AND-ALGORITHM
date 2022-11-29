#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    int mx=-1;
    int ans=0;
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[n]-a[n+1]){
            ans++;
            
        }
        ans=max(mx,a[i]);
    }
    cout<<ans<<endl;
}