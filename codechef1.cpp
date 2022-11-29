#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>V1={1,2,4,5,7};
    vector<int>V2={0,3,6,8,9,11};
    vector<int>V3;
    int i=0,j=0,l=0;
    int size1=V1.size();
    int size2=V2.size();
    int max_size=max(size1,size2);
    int k=0;
    while(k<max_size){
       if(V1[i]<V2[j]){
        V3[l]=V1[i];
        i++;
       }
       else{
        V3[l]=V2[j];
        j++;
       }
       while(i<size1){
        V3[l]=V1[i];
        i++;
       }
       while(j<size2){
        V3[l]=V3[j];
        j++;
       }
    }
    for(int m=0;m<V3.size();m++){
        cout<<V3.at(m)<<" ";
    }
    return 0;
}