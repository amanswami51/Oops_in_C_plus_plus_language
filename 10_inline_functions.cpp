/*
    #Inline function
        --Inline functionn is used to reduce the function call overhead.
        --Inline function is a function that is expanded in line when it is called.
        --It increase efficiency if it is small.
        --When the inline function is called, whole code of the inline function gets inserted at the point of inline funtion call.

        
    #Not use inline functions
        -- If recursion occurs
        -- if static variables are use

*/

// #include <iostream>
// using namespace std;

// inline int product(int a, int b){
//     return a*b;
// }

// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<"The product of a or b is "<<product(a,b)<<endl;
//     cout<<"The product of a or b is "<<product(a,b)<<endl;
//     cout<<"The product of a or b is "<<product(a,b)<<endl;
//     cout<<"The product of a or b is "<<product(a,b)<<endl;
//     cout<<"The product of a or b is "<<product(a,b)<<endl;
//     return 0;
// }


// static variables*******************************
// #include <iostream>
// using namespace std;

// int hi1(){
//     int c=0;
//     c = c+1;
//     return c;
// }
// int hi2(){
//     static int c=0;
//     c = c+1;
//     return c;
// }

// int main(){
    
//     cout<<"hi1 is call*******************"<<endl;
//     cout<<"Value of c : "<<hi1()<<endl;
//     cout<<"Value of c : "<<hi1()<<endl;
//     cout<<"Value of c : "<<hi1()<<endl;
//     cout<<"Value of c : "<<hi1()<<endl;

//     cout<<"hi2 is call*******************"<<endl;
//     cout<<"Value of c : "<<hi2()<<endl;
//     cout<<"Value of c : "<<hi2()<<endl;
//     cout<<"Value of c : "<<hi2()<<endl;
//     cout<<"Value of c : "<<hi2()<<endl;
    
//     return 0;
// }

