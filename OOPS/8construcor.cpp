//constructor
#include<iostream>
using namespace std;
class HERO{
 //properties
 private: 
 int health;

 public:
 char level;

 HERO(){
    cout<<"constructor called"<<endl;
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
cout<<"hi"<<endl;
HERO ramesh;
cout<<"hello"<<endl;
//dynamically
HERO *b = new HERO;
HERO *b = new HERO();




 }