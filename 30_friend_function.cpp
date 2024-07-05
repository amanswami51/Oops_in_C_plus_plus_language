#include<iostream>
using namespace std; 

class dost{
    int num1;
    int num2;
    public:
        void setData(){
            cout<<"Enter first number : ";
            cin>>num1;
            cout<<"Enter second number : ";
            cin>>num2;
        }
        friend float Avg(dost s);
};

float Avg(dost arg){
    return (arg.num1+arg.num2)/2.0;
}

int main(){
    dost aman;
    aman.setData();
    cout<<"Avg of both number is : "<<Avg(aman)<<endl;
    return 0;
}



