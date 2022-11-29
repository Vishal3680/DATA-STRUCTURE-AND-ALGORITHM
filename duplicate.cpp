#include<iostream>  ///wrong ...
using namespace std;
string removedup(string s){
    if(s.length()==0){
        return "";
    }
    char a=s[0];
    string reststring=removedup(s.substr(1));
    if(a==reststring[0]){
        return reststring;
    }
    else{
        return a+reststring;
    }
}
int main(){
   cout<<removedup("aaaabbbbb")<<endl;
    return 0;
}