#include <iostream>
using namespace std;
#include <string>

class Student{
    public:
    string name;
    int age;
    float gpa;

    void display(){
       cout<<"name"<<name<<endl;
       cout<<"age"<<age<<endl;
       cout<<"gpa"<<gpa<<endl;
}

};

int main(){
    Student student;
    student.name="aatif";
    student.age=21;
    student.gpa=7.36;

   student.display();
}