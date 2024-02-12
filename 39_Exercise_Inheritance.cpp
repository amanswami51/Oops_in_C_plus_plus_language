#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
using namespace std;

class SimpleCalculater
{
protected:
    int a, b;

public:
    void set_ab()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }
    void dispay_ab()
    {   
        int s;
        cout<<"Enter 1 for sum, 2 for subtract, 3 for multiply, 4 for devide "<<endl;
        cin>>s;
        switch (s)
        {
        case 1:
            cout << "The sum is " << (a + b) << endl;
            break;
        case 2:
            cout << "The subtract is " << (a - b) << endl;
            break;
        case 3:
            cout << "The multiply is " << (a * b) << endl;
            break;
        case 4:
            cout << "The devide is " << float(a / b) << endl;
            break;
        
        default:
            cout<<"******Error occurs*******"<<endl;
            break;
        }
    }
};

class ScientificCalculater
{
protected:
    int c, d;

public:
    void set_cd()
    {
        cout << "Enter the two value : " << endl;
        cin >> c >> d;
    }
    void display_cd()
    {
        int t;
        cout<<"Enter 1 for power, 2 for square-root, 3 for sin, 4 for cos, 5 for tan, 6 for log "<<endl;
        cin>>t;
        switch (t)
        {
        case 1:
            cout << "calculating power : " << pow(c, d) << endl;
            break;
        case 2:
            cout << "The value of square root : " << sqrt(c) << endl;
            break;
        case 3:
            cout << "value of sin : " << sin(c) << endl;
            break;
        case 4:
            cout << "value of cos : " << cos(c) << endl;
            break;
        case 5:
            cout << "value of tan : " << tan(c) << endl;
            break;
        case 6:
            cout << "The value of log : " << log(c) << endl;
            break;
        
        default:
            cout<<"******Error occurs*******"<<endl;
            break;
        }
    }
};

class HybridCalculater : public SimpleCalculater, public ScientificCalculater
{
protected:
public:
};

int main()
{
    HybridCalculater h1;
    h1.set_ab();
    h1.dispay_ab();

    h1.set_cd();
    h1.display_cd();    
    return 0;
}