#include <iostream>
using namespace std;

class Base1{
    protected:
    public:
        void greed(){
            cout << "Hello, how are you" << endl;
        }
};

class Base2{
    protected:
    public:
        void greed(){
            cout << "Namste, aap kese ho" << endl;
        }
};

class derived : public Base1, public Base2{
    protected:
    public:
        void print(){
            // greed(); //It generated the ambiguity
            Base1 :: greed(); //resolve ambiquity
            Base2 :: greed(); //resolve ambiquity
        }
};

int main(){
    derived d1;
    d1.print();
    return 0;
}