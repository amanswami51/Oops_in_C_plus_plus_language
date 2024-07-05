#include<iostream>

using namespace std;

class Concept{
    int a;
    public:
        void setValue(int i){
            a = i;
        }
        void display(Concept c){
            cout<<this->a<<endl; //"this" keyword represents the "c1" 
            cout<<c.a<<endl; //"c" keyword represents the "c2"
        }
};

int main(){
    Concept c1;
    c1.setValue(1);

    Concept c2;
    c2.setValue(2);

    c1.display(c2); 

    return 0;
}





