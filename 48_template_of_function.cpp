#include<iostream>
using namespace std; 

template< class T1, class T2>
float funAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    
    cout<<"Average 2 and 4 : "<<funAverage(2, 4)<<endl;
    cout<<"Average 3.5 and 8 : "<<funAverage(3.5,8)<<endl;
    cout<<"Average 7 and 5.43 : "<<funAverage(7,5.43)<<endl;

    return 0;
}

