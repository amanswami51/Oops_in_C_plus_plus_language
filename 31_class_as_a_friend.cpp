#include <iostream>
using namespace std;

class complex;

class calculater{
    public:
        int SumRealComplex(complex, complex);
};

class complex{
    int real;
    int img;
    friend int calculater::SumRealComplex(complex, complex); //declaring the other class function as a friend.
    //friend class calculater; //also we declare the entire calculater class as a friend of complex class.

    public:
        void SetNumber(int x, int y){
            real = x;
            img = y;
        }
        void PrintNumber(){
            cout << "Your number is " << real << "+i" << img << endl;
        }
};

int calculater::SumRealComplex(complex o1, complex o2){
    return (o1.real + o2.real); //wants to access private data member(real, img) of complex class.
}

int main(){

    complex c1, c2;
    calculater cal;

    c1.SetNumber(2, 3);
    c2.SetNumber(4, 6);

    c1.PrintNumber();
    c2.PrintNumber();
    
    cout <<"The sum of real value of c1 and c2 : "<< cal.SumRealComplex(c1, c2)<<endl;

    return 0;
}



 