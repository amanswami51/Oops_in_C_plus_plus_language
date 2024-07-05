#include<iostream>
using namespace std; 

class test{
    int number=0;
    static int count;
    public:
        void setData(void){
            number++;
            count++;
        }
        void showNumber(void){
            cout<<"number: "<<number<<endl;
        }
        static void showCount(void){ //only call static variables //common function for all objects
            cout<<"count : "<<count<<endl;
        }
};

int test::count;

int main(){
    test a,b,c;

    cout<<"Before setData funtion call..."<<endl;
    a.showNumber();
    b.showNumber();
    c.showNumber();
    test::showCount();

    a.setData();   
    b.setData();
    c.setData();

    cout<<"After setData funtion call..."<<endl;
    a.showNumber();
    b.showNumber();
    c.showNumber();
    test::showCount();
    return 0;
}