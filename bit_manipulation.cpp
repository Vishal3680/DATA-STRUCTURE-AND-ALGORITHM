// Finding the unique number in the given set
#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];

    }
    return xorsum;
}
int main(){
int arr[11]={1,3,4,5,5,6,6,1,4};
cout<<unique(arr,10)<<endl;
return 0;

}