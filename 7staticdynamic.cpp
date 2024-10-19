//static and dynamic allocation
//
#include<iostream>
using namespace std;
class HERO{
 //properties
 private: 
 int health;

 public:
 char level;

 void print(){
    cout<<level<<endl;
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
    //static allocation
     HERO a;
     a.sethealth(700);
     a.setlevel('B');
     cout<<"level is "<<a.level<<endl;
     cout<<"helath is "<<a.gethealth()<<endl;

     //dynamic allocation
    HERO*b = new HERO;
    b->sethealth(700);
    b->setlevel('A');
     cout<<"level is "<<(*b).level<<endl;
     cout<<"helath is "<<(*b).gethealth()<<endl;
     cout<<"level is "<<b->level<<endl;
     cout<<"health is "<<b->gethealth()<<endl;
 }