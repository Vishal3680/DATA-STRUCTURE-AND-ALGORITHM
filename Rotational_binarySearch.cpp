#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,6,7,8,9,10,1,2,3,4};
    int beg=0;
    int end=10;
    int target=10;
    bool flag=1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(target==v[mid]){
            flag=0;
            break;
        }
        else if(v[mid]>=v[0]){
            if(target<v[0]){
                beg=mid+1;
            }
            else if(target>=v[0] or target>v[mid]){
                beg=mid+1;
               if(target>v[0])
                end=mid-1;             
        }
        else if(target<v[0]){
            beg=mid+1;
        }
    }
    if(flag){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
    }
    return 0;
}