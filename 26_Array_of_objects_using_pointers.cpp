#include<iostream>
using namespace std; 

class shopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"The value of id is "<<id<<endl;
            cout<<"The value of price is "<<price<<endl;
        }
};


int main(){
    int size = 3;
    shopItem *ptr = new shopItem[size];
    int p;
    float q;
    shopItem *ptrtemp = ptr;
    for(int i = 0; i<size; i++){
        cout<<"Enter Id and Price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);  // (*ptr).setData(p,q);
        ptr++;
    }

    for(int i = 0; i<size; i++){
        cout<<"values of Id and Price of item "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    return 0;
}