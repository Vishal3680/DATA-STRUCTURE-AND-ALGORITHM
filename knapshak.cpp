#include<iostream>
using namespace std;
int knapshak(int val[] ,int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        knapshak(val,wt,n,w);
    }


return max((knapshak(val,wt,n-1,w-wt[n-1])+val[n-1]),knapshak(val,wt,n,w));

 
}
int main(){
    int wt[]={10,20,30};
    int val[]={100,150,50};
    int w=50;
    cout<<knapshak(val,wt,3,w)<<endl;
    return 0;
}