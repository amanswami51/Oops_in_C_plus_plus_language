/*
    #Structure are user defined datatype which holds dis-similar data.
    #A union is a special structure that allocates memory only for the largest data member and holds only one member as a time.

*/

//Structure****************************
// #include<iostream>
// #include<string.h>
// using namespace std;

// struct employee{
//     int Id; //4
//     char favChar; //1
//     float salary; //4
//     char name[20]; //20
// };

// int main(){

//      //first way of initializing
//         struct employee harry;
//         harry.Id=1;
//         harry.favChar='h';
//         harry.salary=200000;
//         strcpy(harry.name,"harry bhai");

//         cout<<"harry.Id : "<<harry.Id<<endl;
//         cout<<"harry.favChar : "<<harry.favChar<<endl;
//         cout<<"harry.salary : "<<harry.salary<<endl;
//         cout<<"harry.name : "<<harry.name<<endl;

//         cout<<"sizeof(harry.Id) : "<<sizeof(harry.Id)<<endl;
//         cout<<"sizeof(harry.favChar) : "<<sizeof(harry.favChar)<<endl;
//         cout<<"sizeof(harry.salary) : "<<sizeof(harry.salary)<<endl;
//         cout<<"sizeof(harry.name) : "<<sizeof(harry.name)<<endl;
//         cout<<"sizeof(struct employee) : "<<sizeof(struct employee)<<endl; // 4+4+4+20 = 32

//     //second way of initializing
//         struct employee aman = {2,'a',100000, "Aman swami"}; 

//         cout<<"aman.Id : "<<harry.Id<<endl;
//         cout<<"aman.favChar : "<<aman.favChar<<endl;
//         cout<<"aman.salary : "<<harry.salary<<endl;
//         cout<<"aman.name : "<<aman.name<<endl;

//     //struct pointer
//         struct employee* ptr = &aman;
//         cout<<"(*ptr).Id : "<<(*ptr).Id<<endl;
//         cout<<"ptr->Id : "<<ptr->Id<<endl;

//     return 0;
// }

//******************************************
// #include<iostream>
// #include<string.h>
// using namespace std;

// typedef struct employee{
//     int Id;
//     char favChar;
//     float salary;
//     char name[10];
// }emp;

// int main(){

//     emp harry;    // struct employee harry;
//     harry.Id=1;
//     harry.favChar='h';
//     harry.salary=12000000;
//     strcpy(harry.name,"king");

//     cout<<harry.Id<<endl;
//     cout<<harry.favChar<<endl;
//     cout<<harry.salary<<endl;
//     cout<<harry.name<<endl;

//     return 0;
// }

//union********************************************** 
// #include<iostream>
// using namespace std;

// union money{
//         int rice; //4
//         char car; //1
//         float pound; //4
//     };

// int main(){

//     union money m1;
//     m1.rice =34;
//     m1.car ='A';
//     m1.pound =33.4;

//     cout<<"m1.pound : "<<m1.pound<<endl;
//     cout<<"sizeof(union money) : "<<sizeof(union money)<<endl; //4+4+4 = 4 //take only maximum value

//     return 0;
// }


//enum********************************************** 
// #include<iostream>
// using namespace std;

// int main(){

//     enum meal{
//          breakfast,
//          lunch,
//          dinner
//      };

//     cout<<"breakfast : "<<breakfast<<endl;
//     cout<<"lunch : "<<lunch<<endl;
//     cout<<"dinner : "<<dinner<<endl;

//     meal m1 = dinner;
//     cout<<"m1 : "<<m1;

//     return 0;
// }