#include<iostream>
using namespace std; 

// Base classes
class alpha{
    int x;
    public:
        alpha(int i){
            x = i;
            cout<<"alpha constructor call"<<endl;
        }
        void show_x(){
            cout<<"value of x is "<<x<<endl;
        }
};

class beta{
    float y;
    public:
        beta(float j){
            y = j;
            cout<<"beta constructor call"<<endl;
        }
        void show_y(){
            cout<<"value of y is "<<y<<endl;
        }
};

// Derived class
class gama : public alpha, public beta{
    int m, n;
    public:
        gama(int a, int b, int c,int d): beta(b), alpha(a){
            m = c;
            n = d;
            cout<<"gama constructor call"<<endl;
        }
        void show(){
            cout<<"m is "<<m<<" and n is "<<n<<endl;
        }
};
int main(){
    gama g1(2,3,4,5);
    g1.show_x();
    g1.show_y(); 
    g1.show();
    return 0;
}