#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class intro
{
    T1 a;
    T2 b;
    T3 c;

    public:
        intro(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout << "The value of a is : " << a << endl;
            cout << "The value of b is : " << b << endl;
            cout << "The value of c is : " << c << endl;
        }
};

int main()
{
    intro<> it1(4, 6.4, 'z');
    it1.display();

    cout<<endl;
    intro<char,char,double> it2('s','t',4.8888);
    it2.display();
    return 0;
}