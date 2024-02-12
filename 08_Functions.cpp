#include<iostream>
using namespace std; 

int sum(int a, int b); //function prototype //functionn declaration 
void greet(); //function prototype

float devide(int numerator, int denominator=2){ //Here denominator is Default argument.
    float c = numerator/denominator;
    return c;
}

int main(){
    int num1, num2;
    cout<<"Enter num1 value : ";
    cin>>num1;
    cout<<"Enter num2 value : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2)<<endl; //function call

    cout<<"divide funtion call : "<<devide(num1, num2)<<endl;
    cout<<"divide funtion call : "<<devide(num1)<<endl;

    greet(); //function call

    return 0;
}

int sum(int a, int b){ //function define
    int c = a+b;
    return c;
}

void greet(){ //function define
    cout<<"Hallo, Good morning";
}


//Note:- num1 and num2 are actual parameters. a and b are are formal parameters.