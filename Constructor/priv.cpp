#include <iostream>
#include <string>

class Student {
  private:
    std::string name;
    int age;
    double score;

  public:
    Student(std::string name, int age, double score) {
      this->name = name;
      this->age = age;
      this->score = score;
    }

    // ... other member functions ...
};

int main() {
  Student s("John Doe", 20, 85.5);
  
  std::cout << "Name: " << s.getName() << std::endl;
  std::cout << "Age: " << s.getAge() << std::endl;
  std::cout << "Score: " << s.getScore() << std::endl;
  
  return 0;
}