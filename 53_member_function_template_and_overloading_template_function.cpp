// #include<iostream>
// using namespace std; 

// template<class T>
// class harry{
//     public:
//         T data;
//         harry(T a){
//             data = a;
//         }
//         void display();
// };

// template <class T>
// void harry<T>::display(){
//     cout<<data;
// }
// int main(){
//     harry<float> h(5.7);
//     h.display();
//     return 0;
// }




#include<iostream>
using namespace std; 

void fun(int a){
    cout<<"The value of a is : "<<a<<". I am not templatised fun()"<<endl;
}

template <class T>
void fun(T a){
    cout<<"The value of a is : "<<a<<". I am templatised fun()"<<endl;
}
int main(){
    fun(4);     //Exact match takes the highest priority. call not templatised fun().
    fun(4.5);   //not match, so call templatised fun().
    fun('x');   //not match, so call templatised fun().
    return 0;
}