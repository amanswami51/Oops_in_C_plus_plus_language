/*
    #Pointer: A pointer is a variable which stores the address of another variable.
        eg: int a=10;
            int* b=&a;
            cout<<"a give value of a : "<<a;
            cout<<"b give address of a : "<<b;

    #Reference variables: We create many names of single variable.
        eg: float x=455;
            float &y=x;
            cout<<"x give value of x : "<<x<<endl;
            cout<<"y also give value of x : "<<y<<endl;
*/
#include<iostream>
using namespace std; 

int main(){

    cout<<"Basic concept of pointer********"<<endl;
        int a=10;
        int* ptr = &a;
        cout<<"a : "<<a<<endl; //a
        cout<<"&a : "<<&a<<endl; //a address
        cout<<"*(&a) : "<<*(&a)<<endl; //a
        cout<<"ptr : "<<ptr<<endl; //a address
        cout<<"*ptr : "<<*ptr<<endl; //a


    cout<<"Arrays and pointers*************"<<endl;
        int marks[4] = {8,6,7,9};
        int* j = marks; //int* j = &marks[0];
        cout<<"*j : "<<*j<<endl;
        cout<<"*(j+1) : "<<*(j+1)<<endl;
        cout<<"*(j+2) : "<<*(j+2)<<endl;
        cout<<"*(j+3) : "<<*(j+3)<<endl;


    //pointer arithmatic*****************
        // address_new = address_current + i* size of datatype;


    //Dynamically allocated arrays*************
        // int *p = (int *)malloc(sizeof(int)*3); // Allocate array p[3] and cast void* to int*
        // p[0] = 1; 
        // p[1] = 2; 
        // p[2] = 3;
        // cout<<"p[1] : "<<p[1]<<endl; 
        // cout<<"*(p+1) : "<<*(p+1)<<endl;
        // free(p);

    return 0;
}