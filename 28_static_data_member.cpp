/*
    output explaination:-
    a -->number=0,1
      ------------------------------------------.
      -->setData                                |
      -->getData                                |
    b -->number =0,1                            | 
      ----------------------------------------->count=0,1,2,3 //It is common variable for all objects  "a,b,c"      
      -->setData                                |
      -->getData                                |
    c -->number =0,1                            |
      ------------------------------------------'
      -->setData
      -->getData
*/

#include<iostream>
using namespace std; 

class item{
    int number=0;
    static int count; //common variable for all objects
    public:
        void setData(){
            number++;
            count++;
        }
        void getData(void){
            cout<<"number : "<<number<<", count :"<<count<<endl;
        }
};

int item::count;

int main(){
    item a,b,c;

    cout<<"Before setData funtion call..."<<endl;
    a.getData();
    b.getData();
    c.getData();

    a.setData();
    b.setData();
    c.setData();

    cout<<"After setData funtion call..."<<endl;
    a.getData();
    b.getData();
    c.getData();

    return 0;
}




