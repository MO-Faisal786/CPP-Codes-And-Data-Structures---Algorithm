#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"Inherited...\n";
        }
};

class B : public A{
    
};

int main(){

    B a;
    a.func();

    return 0;
}