#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s){
    stack<char>st;
    bool res=true;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' && s[i]== '[' && s[i]=='{'){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i] == ')'){
              if(st.top()== '('){
                st.pop();
                
              }else{
            res=false;
            break;
        }
        }
        
        else if(!st.empty() && s[i] == ']'){
              if(st.top()== '['){
                st.pop();
                
              }
              else{
            res=false;
            break;
        }
        }
        
        else if(!st.empty() && s[i] == '}'){
              if(st.top()== '{'){
                st.pop();
                
              }
              else{
            res=false;
            break;
        }
        }
        
    }
    if(!st.empty())
    res=false;

    return res;
}
int main(){
    string s="{[()]}";
    if(isvalid(s)){
        cout<<"Valid string"<<endl;

    }
    else{
        cout<<"Invalid string"<<endl;
    }
    return 0;
}