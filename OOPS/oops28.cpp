// single inheritance
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

int main(){
    cat obj;
    obj.eat();
    obj.bit();
}