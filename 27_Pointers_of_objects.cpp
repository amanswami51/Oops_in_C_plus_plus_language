#include<iostream>
using namespace std; 

class complex{
    int real, imag;
    public:
    void SetData(int a, int b){
        real = a;
        imag = b;
    }
    void getData(){
        cout<<"real value is "<<real<<endl;
        cout<<"imag value is "<<imag<<endl;
    }
};

int main(){ 
    cout<<"method first of creating object and derefrance using concept of pointer"<<endl;
    complex c1;
    complex *ptr1 = &c1;
    (*ptr1).SetData(1,54);
    (*ptr1).getData();
    // ptr1->SetData(1,54);
    // ptr1->getData();


    cout<<"\nmethod second of creating object and derefrance using concept of arrow operator"<<endl;
    complex *ptr2 = new complex;
    ptr2->SetData(12,13);
    ptr2->getData();

    cout<<"\nArray of Objects"<<endl;
    complex *ptr3 = new complex[4];
    ptr3->SetData(33,34);
    ptr3->getData();

    return 0;
}