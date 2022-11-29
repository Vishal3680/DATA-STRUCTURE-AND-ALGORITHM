#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,45,5,43,33,4,65};
    sort(v.begin(),v.end());
    int beg=0;
    int end=9;
    int target=53;
    bool flag=1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(v[mid]==target){
            flag=0;
            break;
        }
        else if(v[mid]<target){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
   
    }
     if(flag==1){
      cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;}

    return 0;
}