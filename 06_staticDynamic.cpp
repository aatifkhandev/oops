//static and dynamic allocation
//
#include<iostream>
using namespace std;
class Abc{
 //properties
 private: 
 int health;

 public:
 char level;

 void print(){
    cout<<level<<endl;
 }
 //getter
 int getHealth(){
    return health;
 }
 char getLevel(){
    return level;
 }
 //setters
 void setHealth(int h){
  health = h;
 }
 void setLevel(char ch){
level = ch;
}
 };
 int main(){
    //static allocation
     Abc a;
     a.setHealth(700);
     a.setLevel('B');
     cout<<"level is "<<a.level<<endl;
     cout<<"Health is "<<a.getHealth()<<endl;

     //dynamic allocation
    Abc*b = new Abc;
    b->setHealth(700);
    b->setLevel('A');
     cout<<"level is "<<(*b).level<<endl;
     cout<<"Health is "<<(*b).getHealth()<<endl;
     cout<<"level is "<<b->level<<endl;
     cout<<"health is "<<b->getHealth()<<endl;
 }