#include<iostream>
using namespace std; 

class code{
    int a;
    public:
        code(){
            a = 0;
        }
        code(int x){
            a = x;
        }
        code(code &y){
            cout<<"The copy constructor call"<<endl;
            a = y.a;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    code c1(100);
    c1.display();

    code c2(c1); //copy constructor call
    c2.display();

    code c3 = c1; //copy constructor call
    c3.display();
    
    code c4;
    c4 = c1; //copy constructor not call // resolve this by c4 = code(c1);
    c4.display();

    return 0;
}