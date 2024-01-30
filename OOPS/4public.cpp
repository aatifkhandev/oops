#include<iostream>
using namespace std;
class HERO {
    //properties
    public : 
    int health;
    char level;
    void print(){
        cout<<level<<endl;
    }
};
    int main(){
        HERO ramesh;
        ramesh.health = 700;
        ramesh.level = 'A';
        cout<<"health is "<<ramesh.health<<endl;
        cout<<"level is : "<<ramesh.level<<endl;
     }
