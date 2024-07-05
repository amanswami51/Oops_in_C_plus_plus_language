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

    cout<<"*****Concept of pointer*****"<<endl;
        int a=10;
        int* ptr = &a;
        cout<<"a : "<<a<<endl; //a
        cout<<"&a : "<<&a<<endl; //a address
        cout<<"*(&a) : "<<*(&a)<<endl; //a
        cout<<"ptr : "<<ptr<<endl; //a address
        cout<<"*ptr : "<<*ptr<<endl; //a


    cout<<"*****Arrays and pointers*****"<<endl;
        int marks[4] = {8,6,7,9};
        int* j = marks; //int* j = &marks[0];
        cout<<"*j : "<<*j<<endl;
        cout<<"*(j+1) : "<<*(j+1)<<endl;
        cout<<"*(j+2) : "<<*(j+2)<<endl;
        cout<<"*(j+3) : "<<*(j+3)<<endl;


    //pointer arithmatic*****
        // address_new = address_current + i* size of datatype;


    cout<<"*****new keyword*****"<<endl;
        int *p1 = new int(40);
        float *p2 = new float(40.78);
        cout<<"The value at address p1 : "<<*(p1)<<endl;
        cout<<"The value at address p2 : "<<*(p2)<<endl;


    cout<<"*****Dynamically allocated arrays by malloc method*****"<<endl;
        int *arr1 = (int *)malloc(sizeof(int)*3); // Allocate array arr1[3] and cast void* to int*
        arr1[0] = 1; 
        arr1[1] = 2; 
        arr1[2] = 3;
        cout<<"arr1[1] : "<<arr1[1]<<endl; 
        cout<<"*(arr1+1) : "<<*(arr1+1)<<endl;
        free(arr1);

    cout<<"*****Dynamically allocated arrays by new keyword*****"<<endl;
        int *arr2 = new int[3];
        arr2[0] = 10;
        arr2[1] = 20;
        arr2[2] = 30;
        cout<<"The value of arr2[0] is "<<arr2[0]<<endl;
        cout<<"The value of arr2[1] is "<<arr2[1]<<endl;
        cout<<"The value of arr2[2] is "<<arr2[2]<<endl;
        delete arr2;

    return 0;
}
