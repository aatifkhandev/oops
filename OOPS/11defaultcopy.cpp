//default copy constructor apan banare
//copy constructor
#include<iostream>
using namespace std;
class HERO{
 //properties
 private: 
 int health;

 public:
 char level;

 HERO(){
    cout<<"constructor called";
 }
 //parametrised constructor
 HERO(int health){
    cout<<"this "<<this<<endl;
    this ->health = health;
 }
    HERO(int health,char level){
        this->level=level;
        this -> health = health;
    }
    //copy constructor
    HERO (HERO &temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this-> level = temp.level;
    }
 

 void print(){
    cout<<"health"<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
 }
 //getter
 int gethealth(){
    return health;
 }
 char getlevel(){
    return level;
 }
 //setters
 void sethealth(int h){
  health = h;
 }
 void setlevel(char ch){
level = ch;
}
 };

 int main(){
    HERO s(70,'C');
    s.print();
    //copy constructor
    HERO r(s);
    r.print();
 }