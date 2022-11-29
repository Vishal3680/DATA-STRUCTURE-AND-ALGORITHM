#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={0,0,1,1,1,2,2,2,2,2,2,2,2,3,5};
    int n=v.size();
    int c=1;
    for(int i=1;i<n;i++){
       if(v[i]==v[i-1]){
        c+=1;
       }
       else{
        c=1;
       }
       if(c>(n/2)){
        cout<<v[i]<<endl;
       }
       return 0;
    }
    
}