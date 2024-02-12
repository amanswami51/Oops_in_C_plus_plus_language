#include <iostream>
using namespace std;

class Base1
{
protected:
public:
    void greed()
    {
        cout << "Hello, how are you" << endl;
    }
};

class Base2
{
protected:
public:
    void greed()
    {
        cout << "Namste, aap kese ho" << endl;
    }
};

class derived : public Base1, public Base2
{
protected:
public:
    void greed()
    {
        Base1 :: greed();
    }
};

int main()
{
    derived d1;
    d1.greed();
    return 0;
}