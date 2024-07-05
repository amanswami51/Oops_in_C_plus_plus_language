// // basic to class
// #include<iostream>
// using namespace std;

// class Time{
//     int hrs;
//     int mins;
//     public:
//         Time(){}
//         Time(int t){
//             hrs = t/60;
//             mins = t%60;
//         }
//         void show_time(){
//             cout<<"hrs: "<<hrs<<" mins: "<<mins<<endl;
//         }
// };

// int main(){
//     Time t1;
//     int duration = 70;

//     t1 = duration;  // t1 = Time(duration);

//     t1.show_time();
// }


// // class to basic
// #include<iostream>
// using namespace std; 

// class shop{
//     int NumberOfItems;
//     int rate;
//     public: 
//         shop(){}
//         shop(int x, int y){
//             NumberOfItems = x;
//             rate = y;
//         }
//         void print(){
//             cout<<"NumberOfItems : "<<NumberOfItems<<" rate : "<<rate<<endl;
//         }
//         operator float(){
//             return (NumberOfItems*rate);
//         }
// };

// int main(){
//         shop s1(5,50);
//         s1.print();

//         float Total_price;
//         Total_price = s1; //price = float(s1);

//         cout<<"Total_price : "<<Total_price<<endl;

//     return 0;
// }



// class to class 
#include<iostream>
using namespace std; 

class shop{
    int NumberOfItems;
    int rate;
    public:
        shop(){}
        shop(int x, int y){
            NumberOfItems = x;
            rate = y;
        }
        void print(){
            cout<<"NumberOfItems : "<<NumberOfItems<<" rate : "<<rate<<endl;
        }
        int get_NumberOfItems(){
            return NumberOfItems;
        }
        int get_rate(){
            return rate;
        }
};

class calculate{
    float price;
    public:
        calculate(){}
        calculate(shop s){
            price = s.get_NumberOfItems() * s.get_rate();
        }
        void show_price(){
            cout<<"Price : "<<price<<endl;
        }
};

int main(){
    shop s1(5,50);
    s1.print();

    calculate c1;
    c1 = s1;    //c1 = calculate(s1);
    c1.show_price();
    
    return 0;
}


