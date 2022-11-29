//Check a number is power of 2 or not

#include<iostream>
using namespace std;
 bool ispowerOf2(int n){
        return(n && !(n & n-1));
    }
int main(){
   int n;
   cin>>n;
   cout<<ispowerOf2(n)<<endl;

}