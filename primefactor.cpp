#include<iostream>
using namespace std;
int primefactor(int n){
    int spf[100]={0};
    for (int i = 2; i <=n; i++)
    {
       spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                spf[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<endl;
        n/=spf[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}