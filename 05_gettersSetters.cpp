//getters and setters
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
    //creation of object
    Abc Aatif;
    //agar value nai dale toh garbage aati
    cout<<"Aatif health :"<<Aatif.getHealth()<<endl;
    cout<<"Aatif level" <<Aatif.getLevel()<<endl;
    //use setter
    ramesh.setHealth(700);
    ramesh.setLevel('a');
    cout<<"Aatif health :"<<ramesh.getHealth()<<endl;
    cout<<"Aatif level" <<ramesh.getLevel()<<endl;
}
