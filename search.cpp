#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
   return firstocc(arr,n,i+1,key);

}
int lastocc(int arr[],int n,int i,int key){
    int restarray=lastocc(arr+1,n,i,key);
    if(i==n){
        return -1;
    }
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
}
int main(){
    int arr[]={1,3,5,46,7,6,8,7};
    cout<<firstocc(arr,8,0,7);
   
    cout<<lastocc(arr,8,0,7);
    return 0;
}