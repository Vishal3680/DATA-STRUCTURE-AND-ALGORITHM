#include<iostream>
using namespace std;
void rearrange(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if (a[i]<0)
        {
            if (i!=j)
            {
                swap(a[i],a[j]);
                j++;
            }
            
        }
        
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



int main(){
   int a[]={2,3,5,1,-1,-2,-3,-7};
   int n=sizeof(a)/sizeof(a[0]);
   rearrange(a,n);
   printarray(a,n);
   return 0;

}