#include<iostream>
using namespace std; 

int count = 0;
class alpha{
    public:
        alpha(){
            count++;
            cout<<"\n No. of object created "<<count<<endl;
        }

        ~alpha(){
            cout<<"\n No. of object destroyed "<<count<<endl;
            count--;
        }
};

int main(){

    cout<<"\nEnter Main function "<<endl;
    alpha A1,A2,A3,A4;

    {
        cout<<"\nEnter block1"<<endl;
        alpha A5;
    }

    {
        cout<<"\nEnter block2"<<endl;
        alpha A6;
    }

    cout<<"\ncome back in main function"<<endl;
    
    return 0;
}