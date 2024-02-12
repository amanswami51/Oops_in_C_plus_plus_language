#include<iostream>
using namespace std; 

class company{
    char name[30];
    float age;
    public:
        void getdata(void);
        void printdata(void);
};

void company::getdata(void){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}

void company::printdata(void){
    cout<<"Name = "<<name<<", Age = "<<age<<endl;
}

int main(){
    company employee[3];

    for(int i=0; i<3; i++){
        cout<<"Detail of employee "<<i+1<<endl;
        employee[i].getdata();
    }    

    for(int i=0; i<3; i++){
        cout<<"employee "<<i+1<<" detail : ";
        employee[i].printdata();
    }    

    return 0;
} 