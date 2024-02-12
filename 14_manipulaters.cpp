/*
    #Typecasting
        int a=45;
        double b=45.46;

        cout<<double(a)<<endl; //45
        cout<<sizeof(a)<<endl; //4
        cout<<sizeof(double(a))<<endl; //8

        cout<<int(b)<<endl; //45
        cout<<sizeof(b)<<endl; //8
        cout<<sizeof(int(b))<<endl; //4

    #Manipulator are used for in what manner we print our outputs.
    #Types: 
        i) endl (#include<iostream>) 
        ii) setw() (#include<iomanip>)

*/

#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
    int a = 1;
    int b = 12;
    int c = 1234;

    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

    return 0;
}
