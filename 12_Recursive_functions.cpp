/*
    #Step by step procedure of finding value of factorial(4)
        factorial(4) = 4 * factorial(3);
        factorial(4) = 4 * 3 * factorial(2);
        factorial(4) = 4 * 3 * 2 * factorial(1);
        factorial(4) = 4 * 3 * 2 * 1;
        factorial(4) = 24;

    #Step by step procedure of finding value of fibonancy(5)
        fibonancy(5) = [fibonancy(4)] + [fibonancy(3)]
        fibonancy(5) = [{fibonancy(3)}+{fibonancy(2)}] + [{fibonancy(2)}+fibonancy(1)]
        fibonancy(5) = [{fibonancy(2)+fibonancy(1)} + {fibonancy(1)+fibonancy(0)}] + [{fibonancy(1)+fibonancy(0)}+ 1]
        fibonancy(5) = [{fibonancy(2)+1} + {1+1}] + [{1+1}+ 1]
        fibonancy(5) = [{(fibonancy(1)+fibonancy(0))+1} + {1+1}] + [{1+1}+ 1]
        fibonancy(5) = [{(1+1)+1} + {1+1}] + [{1+1}+ 1]
        fibonancy(5) = 8
*/


#include<iostream>
using namespace std; 
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{ 
        return n* factorial(n-1);
    }
}

int fibonancy(int m){
    if(m<2){
        return 1;
    }
    else{ 
        return fibonancy(m-1)+fibonancy(m-2);
    }
}

int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    cout<<"Enter the number For Fibonancy series : ";
    cin>>b;
    cout<<"The Fibonancy series of "<<b<<" is "<<fibonancy(b);

    return 0;
}

