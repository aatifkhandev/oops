#include<bits/stdc++.h>
using namespace std;

#include <string>

class Student {
  private:
  string name;
    int age;
    double score;

  public:
    void setname(string name) {
      this->name = name;
    }

   string getname()  {
      return name;
    }

    void setage(int age) {
      this->age = age;
    }

    int getage()  {
      return age;
    }

    void setscore(double score) {
      this->score = score;
    }

    double getscore()  {
      return score;
    }
};

int main(){
    Student student;

    student.setname("aatif");
    student.setage(21);
    student.setscore(7.36);

    cout<<"name is"<<student.getname()<<endl;
    cout<<"age is"<<student.getage()<<endl;
    cout<<"gpa is"<<student.getscore()<<endl;

    // student.display();
}