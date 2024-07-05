//
#include<iostream>
using namespace std; 

class Base{
    public: 
        void display(){
            cout<<"Display Base "<<endl;
        }
        virtual void show(){
            cout<<"show base "<<endl;
        }
};

class Derived : public Base{
    public:
        void display(){
            cout<<"Display derived "<<endl;
        }
        void show(){
            cout<<"show derived "<<endl;
        }
};

int main(){
    // base class object and pointer
    Base *bptr;
    Base b1;

    bptr = &b1;
    bptr->display();
    bptr->show();

    //derived class object
    Derived d1;
    bptr = &d1;
    bptr->display();
    bptr->show();
    return 0;
}