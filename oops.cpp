#include<iostream>
using namespace std;
class student{
public:
string name;
int age;
//DEFULT CONSTRUCTOR
student(){
    cout<<"default constructor"<<endl;
    }
 //parameterised constructor   
student(string s,int g){
    name=s;
    age=g;
    cout<<"Parameterized Constructor"<<endl;
}
//copy consturctor
student(student &s){
  cout<<"Copy constructor"<<endl;
  name=s.name;
  age=s.age;

}
// printing functions
void printInfo(){
    cout<<name<<endl;
    cout<<age<<endl;}

    //Destructor 
~student(){
    cout<<"Desturctor called"<<endl;
}
// print name using getname
string getName(){
    return name;
}
// set the name of any object
void setname(string s){
    name=s;
    
}
// Operator overloading
bool operator ==(student &s){
if(name==s.name && age==s.age){
    return true;
}
else{
    return false;
}
}

};

int main(){
   student a;
   student b;
   student c("Abhishek",35);
   a.name="vishal";
   a.age=20;
   b.age=34;
   b.name="harry";
   student d=b;
   if(b==b){
       cout<<"Same"<<endl;
   }
   else{
       cout<<"Not same"<<endl;
   }
    return 0;
}