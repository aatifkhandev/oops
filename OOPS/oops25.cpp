// copy constructor

#include<bits/stdc++.h>
using namespace  std;

class Student{
    public:
    string name;
    int age;

    Student(string name, int age){
        this->name= name;
        this->age = age;
    }

    // copy constructor
    Student(const Student & other){
        this->name= other.name;
        this->age= other.age;

    }
    string getname(){
        return this->name;
    }
    int getage(){
        return this->age;
    }
};

int main(){
    Student s1("aatif", 21);
     Student s2=s1;

cout<<"s1";
     cout<<"name is"<<s1.getname()<<endl;
      cout<<"age is"<<s1.getage()<<endl;

cout<<"s2";
       cout<<"name is"<<s2.getname()<<endl;
      cout<<"age is"<<s2.getage()<<endl;
}