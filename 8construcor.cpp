//constructor
#include<iostream>
using namespace std;
class Abc{
 //properties
 private: 
 int health;

 public:
 char level;

 Abc(){
    cout<<"constructor called"<<endl;
 }

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
//object created statically
cout<<"hi"<<endl;
Abc Aatif;
cout<<"hello"<<endl;
//dynamically
Abc *b = new HERO;
HERO *b = new HERO();




 }