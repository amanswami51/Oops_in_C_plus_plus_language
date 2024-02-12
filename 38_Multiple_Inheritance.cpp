#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived: public Base1 , public Base2
{
    public:
        void show(){
            cout<<"Base1int :"<<base1int<<endl;
            cout<<"Base2int :"<<base2int<<endl;
            cout<<"Base1int+Base2int :"<<base1int + base2int<<endl;
        }
};

int main()
{
    Derived d;
    d.set_base1int(5);
    d.set_base2int(6);
    d.show();
    return 0;
}