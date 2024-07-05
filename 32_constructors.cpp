/*
    1. constructors is a special member function with same name as of the class. These functions are invoke during initialization of objects.
    2. They should declared in the public section.
    3. They are invoked automatically when the objects are created.
    4. They do not have return type not even void.
    5. They can have default arguments.
*/

#include <iostream>
using namespace std;

class concept{
    int m, n;
    public:
        concept(){  // default constructor
            cout<<"Default constructor is call..."<<endl;
            m=0;
            n=0;
        }
        concept(int, int);
        void display(){
            cout<<"m = "<<m<<", n = "<<n<<endl;
        }
};

concept::concept(int x, int y){
    m = x;
    n = y;
}

int main(){

    concept obj1(2,4); //implicit call
    obj1.display();

    concept obj2; //It call default constructor
    obj2.display();

    concept obj3 = concept(25, 75); //explicit call
    obj3.display();

    return 0;
}




// #include<iostream>
// using namespace std; 

// class code{
//     int a;
//     public:
//         code(){
//             a = 0;
//         }
//         code(int x){
//             a = x;
//         }
//         code(code &y){
//             cout<<"The copy constructor call"<<endl;
//             a = y.a;
//         }
//         void display(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };
// int main(){
//     code c1(100);
//     c1.display();

//     code c2(c1); //copy constructor call
//     c2.display();

//     code c3 = c1; //copy constructor call
//     c3.display();
    
//     code c4;
//     c4 = c1; //copy constructor not call // resolve this by c4 = code(c1);
//     c4.display();

//     return 0;
// }