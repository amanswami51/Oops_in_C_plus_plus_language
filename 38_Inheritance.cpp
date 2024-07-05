/*

#Inheritance:- This is the process by which objects of one class(Derived) aquires the properties of another class(base).

#Basic syntext of inheritance :- 
The Existing class is called as the "Base" class.
The new class which is inherited is called as the "Derived" class.
    class Base{
        private: //private but not inherited
            ----------
        protected: //private but inherited
            ----------
        public: //all data-member and member-functions are inherited
            ----------
    };
    class Derived : visibility-mode Base{
        private:
            ----------
        protected:
            ----------
        public:
            ----------
    };

#visibility-mode :-
                        public-mode         private-mode        protected-mode
1.private memebers       not inherited       not inherited       not inherited
2.protected memebers     protected           private             protected
3.public members         public              private             protected


#Types of Inheritance :-
1). Single Inheritance: - (class1)-->(class2)
2). Multilevel Inheritance :- (class1)-->(class2)-->(class3)
3). Multiple Inheritance :- (class1, class2)-->(class3)
4). Hierarchical Inheritance :- (class1)-->(class2, class3)
5). Hybrid Inheritance :- Combination of inheritances.

*/

//Example of single inheritance*********************
#include <iostream>
using namespace std;

class Base{
        int b1; //private but not inherited
    protected:
        int b2;//private but inherited
    public:
        int b3; //Inherited
        void setDataB(int i, int j){ //Inherited
            b1 = i;
            b2 = j;
        }
        void displayB(){ //Inherited
            cout<<"b1 : "<<b1<<", b2 : "<<b2<<", b3 : "<<b3<<endl;
        }
};

class Derived : public Base{
        int d1;
    public:
        int d2;
        void setDataD(){
            // d1 = b1; //Not use b1 bcz it is not inherited
            d1 = b2; //use b2 bcz it is inherited
            // d1 = b3; //use b3 bcz it is inherited
        }
        void displayD(){
            cout<<"d1 : "<<d1<<", d2 : "<<d2<<endl;
        }
};

int main(){
    Derived derObj;

    //Object of Derived class uses the publically Inherited data-memebers and member-functions of Base class.
    derObj.setDataB(1,2);
    derObj.b3 = 3;
    derObj.displayB();

    //Object of Derived class uses public data-memebers and member-functions of own class.
    derObj.d2 = 4;
    derObj.setDataD();
    derObj.displayD();

    return 0;
}