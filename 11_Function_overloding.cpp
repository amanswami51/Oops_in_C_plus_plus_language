#include<iostream>
using namespace std;

// volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}

// volume of cylender
float volume(int r, int h){
    return (3.14*r*r*h);
}

// volume of cube
int volume(int a){
    return (a*a*a);
}
int main(){
    cout<<"Volume of cuboide of length 2, breath 3, height 4 is "<<volume(2,3,4)<<endl;
    cout<<"Volume of cylender of radius 2, height 4 is "<<volume(2,4)<<endl;
    cout<<"Volume of cube of side 2 is "<<volume(2)<<endl;
    return 0;
}