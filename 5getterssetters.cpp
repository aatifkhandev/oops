//getters and setters
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
    //creation of object
    HERO ramesh;
    //agar value nai dale toh garbage aati
    cout<<"ramesh health :"<<ramesh.gethealth()<<endl;
    cout<<"ramesh level" <<ramesh.getlevel()<<endl;
    //use setter
    ramesh.sethealth(700);
    ramesh.setlevel('a');
    cout<<"ramesh health :"<<ramesh.gethealth()<<endl;
    cout<<"ramesh level" <<ramesh.getlevel()<<endl;
}
