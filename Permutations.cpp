#include "bits/stdc++.h"
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>ans;

int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    for(auto &i: A){
        cin>>i;
    }
    sort(A.begin(),A.end());
    do{
        ans.push_back(A);
    }while(next_permutation(A.begin(),A.end()));
    for(auto v:ans){
        for(auto i: v){
            cout<<i<<" ";
            cout<<"\n";
        }
    }



    return 0;
}