#include<iostream>
using namespace std; 

// Grand-parent class
class student{
    protected:
        int roll_number;
    public: 
        void get_number(int a){
            roll_number = a;
        }
        void put_number(){
            cout<<"Your roll number is "<<roll_number<<endl;
        }
};

// parent classes
class test: virtual public student{
    protected:
        float part1, part2;
    public: 
        void get_marks(float x, float y){
            part1 = x;
            part2 = y;
        }
        void put_marks(){
            cout<<"Your maths marks is "<<part1<<" and Your physics marks is "<<part2<<endl;
        }
};

class sports: virtual public student{
    protected:
        float score;
    public:
        void get_score(float s){
            score = s;
        }
        void put_score(){
            cout<<"Your sports score is "<<score<<endl;
        }
};

//child class
class result: public test, public sports{
        float total;
    public:
        void dispaly(){
            total = part1 + part2 + score;
            put_number();
            put_marks();
            put_score();
            cout<<"The total performance(Math marks + Physics marks + sports score) is "<<total<<endl;
        }
};

int main(){
    result aman;
    aman.get_number(2125688);   // Input roll number
    aman.get_marks(30.5,33.7);  // Input maths and physics marks
    aman.get_score(35.3);       // Input sports score
    aman.dispaly();             // output roll number, maths marks, physics marks, sports marks and total marks
    return 0;
}