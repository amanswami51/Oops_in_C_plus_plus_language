/*
    Inheritance :- (class1)-->(class2, class3)-->(class4).
    Let's consider class1 have "roll_number" datamember.
    "roll_number" is inherited in both class2 and class3.
    class4 is inherite from class2, class3. Then class4 contains two same "roll_number".
    This same value generate the ambiguity in program.
    We resolve this ambiguity by "virtual" keyword.
*/


#include<iostream>
using namespace std; 

// Grand-parent class
class student{
    protected:
        int roll_number;
    public: 
        void setRollNo(int a){
            roll_number = a;
        }
        void printRollNo(){
            cout<<"Your roll number is "<<roll_number<<endl;
        }
};

// parent classes
class test: virtual public student{
    protected:
        float part1, part2;
    public: 
        void setMarks(float x, float y){
            part1 = x;
            part2 = y;
        }
        void printMarks(){
            cout<<"Your maths marks is "<<part1<<" and Your physics marks is "<<part2<<endl;
        }
};

class sports: virtual public student{
    protected:
        float score;
    public:
        void setScore(float s){
            score = s;
        }
        void printScore(){
            cout<<"Your sports score is "<<score<<endl;
        }
};

//child class
class result: public test, public sports{
        float total;
    public:
        void dispaly(){
            total = part1 + part2 + score;
            printRollNo();
            printMarks();
            printScore();
            cout<<"The total performance(Math marks + Physics marks + sports score) is "<<total<<endl;
        }
};

int main(){
    result aman;
    aman.setRollNo(2125688);   //Input roll number
    aman.setMarks(30.5,33.7);  //Input maths and physics marks
    aman.setScore(35.3);       //Input sports score
    aman.dispaly();            //output roll number, maths marks, physics marks, sports marks and total marks
    return 0;
}


