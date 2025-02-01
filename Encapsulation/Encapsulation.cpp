// encapsulation

#include<bits/stdc++.h>
using namespace std;


class Student{

    private:

    string name;
    int age;
    int rollno;

    public:
    void setname(string name){
        this->name=name;
    }
    string getname(){
        return name;
    }

    void setage(int age){
        this->age=age;
    }

    int getage(){
        return age;
    }

    void setrollno(int rollno){
        this->rollno=rollno;
    }

    int getrollno(){
        return rollno;
    }

};

int main(){
    Student s1;
    s1.setname("aatif");
    s1.setage(27);
    s1.setrollno(160318735083);

    cout<<"name is : "<<s1.getname()<<endl;
    cout<<"age is  : "<<s1.getage()<<endl;
    cout<<"roll is :"<<s1.getrollno()<<endl; 
}
