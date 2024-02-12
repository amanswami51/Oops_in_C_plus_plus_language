// #include<iostream>
// using namespace std;

// class base{
//     public:
//         virtual void show();    // This function ensure that derived class must create show function and must overwrite this(virtual void show()) function
// };

// class derived : public base{
//     public: 
//         void show(){
//             cout<<"call show function of derived class"<<endl;
//         }
// };

// int main(){
//     // base b1;     we can create object of abstract (base class) class 
//     base *bp = new derived();
//     bp->show();  
//     return 0;
// }



#include<iostream>
using namespace std; 

class base{
    protected:
        int x;
    public:
        virtual void fun() = 0;
        base(int i){
            x = i;
            cout<<"base class constructor"<<endl;
        }
};

class derived: public base{
    int y;
    public:
        derived(int i, int j): base(i){
            y = j;
        }
        void fun(){
            cout<<"value of x is "<<x<<endl<<"Value of y is "<<y;
        }
};

int main(){
    derived d(4,5);
    d.fun();
    return 0;
}