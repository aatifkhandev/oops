// destructor

#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
  string name;

  public:
    Student(string name) {
      this->name = name;
      cout << "Student " << this->name << " created" <<endl;
    }

    ~Student() {
      cout << "Student " << this->name << " destroyed" <<endl;
    }
};

int main() {
  Student* s = new Student("John Doe");
  delete s;
  return 0;
}





