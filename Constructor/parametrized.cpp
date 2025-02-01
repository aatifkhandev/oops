// parametrized constructor

#include<bits/stdc++.h>
using namespace std;

class student{
    public:

    string name;
    int age;

     public:
    student(string name, int age){
        this->name=name;
        this->age=age;
    }
};
int main(){
    student s("aatif", 21);
       cout<<"name is :"<<s.name<<endl;
       cout<<"age is"<<s.age<<endl;
       

}