//shallow and deep copy
#include<iostream>
using namespace std;
class HERO{
 //properties
 private: 
 int health;

 public:
 char *name;
 char level;

 HERO(){
    cout<<" simple constructor called";
    name = new char[100];
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
      cout<<"name"<<this->name<<endl;
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
void setname(char name[]){
    (this->name,name);
}
 };

 int main(){
  HERO hero1;
  hero1.sethealth(12);
  hero1.setlevel('D');
  char name(7)="babbar";
  hero1.setname(name);
  hero1.print();
  
 }