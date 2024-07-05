// //operator overloading for binary operators
#include<iostream>
using namespace std; 

class complex{
    float real;
    float img;
    public:
        complex(){}
        complex(float x, float y){
            real = x;
            img = y;
        }
        complex operator+(complex c){
            complex temp;
            temp.real = real + c.real;
            temp.img = img + c.real;
            return temp;
        }
        void display(){
            cout<<real<<" +i "<<img<<endl;
        }
};
int main(){
    complex c1(2.5,3.5), c2(1.6,2.7), c3;
    //  c3 = c1.operator+(c2); 
		c3 = c1 + c2;          
     cout<<"c1 = "; c1.display();
     cout<<"c2 = "; c2.display();
     cout<<"c3 = "; c3.display();

    return 0;
}


// // //*************multiply by operator overloading*************
// #include<iostream>
// using namespace std; 

// class cal{
// 	int a;
// 	public:
// 		cal(){}
// 		cal(int i){
// 			a = i;
// 		}
// 		cal operator*(cal s1){
// 			cal temp;
// 			temp.a = a * s1.a;
// 			return temp;
// 		}
// 		void display(){
// 			cout<<"multiply : "<<a<<endl;
// 		}
// };

// int main(){
// 		cal n1, n2, mul;
// 		n1 = cal(2);
// 		n2 = cal(5);

// 		mul = n1*n2;	// mul = n1.operator*(n2);
// 		mul.display();

// 	return 0;
// }



// ***********operator overloading for unary operators***********
// #include<iostream>
// using namespace std; 

// class calculate{
// 	int a;
// 	public:
// 		calculate(){}
// 		calculate(int x){
// 			a = x;
// 		}
// 		calculate operator++(){
// 			calculate temp;
// 			temp.a = ++a;
// 			return temp;
// 		}
// 		calculate operator++(int){
// 			calculate temp;
// 			temp.a = a++;
// 			return temp;
// 		}
// 		calculate operator--(){
// 			calculate temp;
// 			temp.a = --a;
// 			return temp;
// 		}
// 		calculate operator--(int){
// 			calculate temp;
// 			temp.a = a--;
// 			return temp;
// 		}
// 		void display(){
// 			cout<<"a : "<<a<<endl;
// 		}

// };

// int main(){
// 	calculate c1(5);

// 	calculate c2 = ++c1;	// c2 = c1.operator++();
// 	c2.display();


// 	calculate c3 = c1++;	// c3 = c1.operator++(int);
// 	c3.display();


// 	calculate c4 = --c1;	// c3 = c1.operator--();
// 	c4.display();


// 	calculate c5 = c1--;	// c3 = c1.operator--(int);
// 	c5.display();


	
// 	return 0;
// }

