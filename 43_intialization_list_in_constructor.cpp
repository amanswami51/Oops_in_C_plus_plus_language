#include<iostream>
using namespace std; 

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(j)       //this is valid
        // Test(int i, int j): a(i), b(i+j)     //this is valid
        // Test(int i, int j): a(i), b(2*j)     //this is valid
        // Test(int i, int j): a(i), b(a+j)     //this is valid
        // Test(int i, int j): b(j), a(i)       //this is valid
        Test(int i, int j): b(j), a(j+i)        //this is valid
        // Test(int i, int j): b(j), a(b*i)     //this is invalid because 'a' intialized first
        {
            cout<<"constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;

        }
};

int main(){
    Test t(4,6);
    return 0;
}