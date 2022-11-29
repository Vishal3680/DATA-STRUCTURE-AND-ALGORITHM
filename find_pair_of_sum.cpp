#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={2,4,3,1,7,11};
    sort(v.begin(),v.end());
    int start=0,end=v.size()-1,target=10;
    while(start<end){
        int sum=v[start]+v[end];
        if(sum==target){
            cout<<"yes"<<endl;
            break;
        }
        else if(sum<target){
            start++;
        }
        else{
            end--;
        }
    }
    return 0;
}