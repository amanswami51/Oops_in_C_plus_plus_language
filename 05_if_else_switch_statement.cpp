//if else statement****************************************
// #include<iostream>
// using namespace std;
// int main(){

//     int age;
//     cout<<"Enter your age : ";
//     cin>>age;
//     if(age<18){
//         cout<<"Not Enter in party.";
//     }
//     else if(age==18){
//         cout<<"Enter in party but not drink.";
//     }
//     else{
//         cout<<"Do anything in party.";
//     }

//     return 0;
// }

//switch statement*****************************************
#include<iostream>
using namespace std;

int main(){
    char grad;
    cout<<"Enter your grad : ";
    cin>>grad;
    switch(grad){
        case 'A' :
            cout<<"Your grad is A"<<"\n";
            break;
        case 'B' :
            cout<<"Your grad is B"<<endl;
            break;
        case 'C' :
            cout<<"Your grad is C"<<"\n";
            break;
        default:
            cout<<"Your grad is D"<<"\n";
            break;
    }
    return 0;
}
