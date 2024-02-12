#include<iostream>
using namespace std; 

class student{
    protected:
        int roll_number;
    public: 
        void set_roll_number(int r){
            roll_number = r;
        }
        void get_roll_number(){
            cout<<"The roll number is "<<roll_number<<endl;
        }
};


class Exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(){
            cout<<"The marks obtained in maths is "<<maths<<endl;
            cout<<"The marks obtained in physics is "<<physics<<endl;
        }
};



class result : public Exam{
        float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"your percentage is "<<(maths+physics)/2<<endl;
        }
};


int main(){
    result aman;
    aman.set_roll_number(2125688);
    aman.set_marks(22,20);
    aman.display_result();
    return 0;
}