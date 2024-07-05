#include <iostream>
using namespace std;

class Employee{
    private:
        int a, b;
        char name[30];
    public:
        int c, d;
        void setData(int a1, int b1);
        void getData(){
            cout<<"Value of a is : "<<a<<endl;
            cout<<"Value of b is : "<<b<<endl;
            cout<<"Value of d is : "<<c<<endl;
            cout<<"Value of e is : "<<d<<endl;
            cout<<"Your name is : "<<name<<endl;
        }
};

void Employee::setData(int a1, int b1){
    a = a1;
    b = b1;
    cout<<"Enter your name : "; cin>>name;
}

int main(){
    Employee harry;
    //harry.a = 134; //a is private, not access directly
    //harry.b = 142; //b is private, not access directly
    harry.c = 34;
    harry.d = 89;
    harry.setData(1, 2);
    harry.getData();
    return 0;
}