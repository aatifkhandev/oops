// multi level inheritance
#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"eating";
    }
};
class cat : public animal{
    public:
    void bit(){
        cout<<"biting"<<endl;
    }
};
class babycat:public cat{
    public:
    void smile(){
cout<<"smile"<<endl;
    }
};

int main(){
    babycat obj;
    obj.eat();
    obj.bit();
    obj.smile();
}