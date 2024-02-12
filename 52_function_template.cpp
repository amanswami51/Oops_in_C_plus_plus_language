#include<iostream>
using namespace std; 

template< class T1, class T2>
float funAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    
    cout<<"Average of two number : "<<funAverage(5.2,2);

    return 0;
}

