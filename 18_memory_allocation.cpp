#include<iostream>
using namespace std; 

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

    public:
        void setData(void);
        void getData(void);
};

void shop::setData(void){
    cout<<"Enter Id of your item no "<<counter+1<<" : ";
    cin>>itemId[counter];
    cout<<"Enter Price of your item : ";
    cin>>itemPrice[counter];
    counter++;
}

void shop::getData(void){
    for(int i=0; i<counter; i++){
        cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
} 

int main(){
    shop dukaan;
    dukaan.setData();
    dukaan.setData();
    dukaan.setData();
    dukaan.getData();

    shop bhatiya;
    bhatiya.setData();
    bhatiya.setData();
    bhatiya.getData();
    return 0;
}