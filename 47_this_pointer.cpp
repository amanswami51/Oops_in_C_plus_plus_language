/*
    *************This pointer*************
    Every object in c++ has to access to own address through "This pointer".
*/

// #include<iostream>
// using namespace std; 

// class A{
//     int a;
//     public:
//         void setData(int a){
//             this->a = a;
//         }
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };

// int main(){
//     A 
//     return 0; 
// }




//*************college program*************
#include<iostream>
using namespace std; 

class BOX{
    double length;
    double breath;
    double height;
    public:
        BOX(double l=2.0, double b=2.0, double h=2.0){
            cout<<"constructor called "<<endl;
            length = l;
            breath = b;
            height = h;
        }
        double volume(){
            return length*breath*height;
        }
        int compare(BOX box){
            return this->volume()>box.volume();
        }
};

int main(){
        BOX box1(3.3,1.2,1.5);
        BOX box2(8.5,6.0,2.0);

        if(box1.compare(box2)){
            cout<<"Box2 is smaller than Box1"<<endl;
        }
        else{
            cout<<"Box2 is equal to or larger than Box1"<<endl;
        }
    return 0;
}





