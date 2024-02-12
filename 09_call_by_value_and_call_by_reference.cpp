//call by value (In this case function can not change value of variables)******************************
// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int x=5, y=4;
//     cout<<"Value of x : "<<x<<" "<<"Value of y : "<<y<<endl;
//     swap(x,y); //send duplicate value of x and y.
//     cout<<"Value of x : "<<x<<" "<<"Value of y : "<<y<<endl;
//     return 0;
// }



//call by reference using pointers**************************************************
// #include<iostream>
// using namespace std;
// //Note:- void swap(const int *a, int *b) then we not change value of 'a'.
// void swap(int *a, int *b){
//     int temp = *a;
//         *a = *b;
//         *b = temp;
// }
// int main(){
//     int x=5, y=4;
//     cout<<"Value of x : "<<x<<" "<<"Value of y : "<<y<<endl;
//     swap(&x, &y); //send address of x and y.
//     cout<<"Value of x : "<<x<<" "<<"Value of y : "<<y<<endl;
//     return 0;
// }


//call by reference using c++ reference variables***********************************
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b){
//     int temp = a;
//         a = b;
//         b = temp;
// }
// int main(){
//     int x=5, y=4;
//     cout<<"Value of x : "<<x<<" "<<"value of y : "<<y<<endl;
//     swap(x,y); //send actual value of x and y
//     cout<<"Value of x : "<<x<<" "<<"value of y : "<<y<<endl;

// }