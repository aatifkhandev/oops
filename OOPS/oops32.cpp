// hybrid
#include<bits/stdc++.h>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"vehicle";
    }
};


class fare{
    public:
    fare(){
        cout<<"fare";
    }
};

class car : public vehicle{

};

class bus : public vehicle , public fare{

};

int main(){
    bus obj;
}