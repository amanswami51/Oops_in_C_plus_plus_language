/*
    Abstract class :- The class that contains the pure virtual functions.
    Here "virtual void show()=0;" called pure virtual functions.
    Note:- we can not create object of abstract (base class) class, but we can use pointers and references to abstract class types.
*/

#include<iostream>
using namespace std;

class base{
    public:
        virtual void show()=0;    // This function ensure that derived class must create show function and must overwrite this(virtual void show()) function
};

class derived : public base{
    public: 
        void show(){
            cout<<"show fun of derived class"<<endl;
        }
};

int main(){
    //base b1;     //we can not create object of abstract (base class) class.
    base *bp = new derived(); //but we can use pointers and references to abstract class types.
    bp->show();  

    derived d1;
    d1.show();
    return 0;
}
