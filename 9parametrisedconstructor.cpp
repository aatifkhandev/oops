//parametrised constructor
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
//object created statically
HERO ramesh(10);
cout<<"address of ramesh"<<&ramesh<<endl;
ramesh.print();
//object created dynamically
HERO*h = new HERO(11);
h->print();
HERO temp (22,'B');
temp.print();


 }