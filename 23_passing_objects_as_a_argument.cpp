#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public: 
        void setdata(int v1, int v2){
            real = v1;
            img = v2;
        }
        void complexNumberSum(complex o1, complex o2);   
        void printnumber(){
            cout<<"Your complex no. is "<<real<<"+i"<<img<<endl;
        }
};

void complex::complexNumberSum(complex o1, complex o2){
    real = o1.real + o2.real;
    img = o1.img + o2.img;
} 

int main(){
    complex c1, c2, c3;

    c1.setdata(1,2);
    c1.printnumber();


    c2.setdata(3,4);
    c2.printnumber();

    c3.complexNumberSum(c1,c2);
    c3.printnumber();
    return 0;
}