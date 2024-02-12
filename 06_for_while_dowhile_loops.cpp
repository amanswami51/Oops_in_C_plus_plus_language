#include<iostream>
using namespace std;
int main(){

    //for loop******************************
        for(int i=1; i<=50; i++){
            cout<<i<<endl;
        }
        int i,j;
        for(i=5,j=6; i<10&&j<15; i++,j++)
        {
            cout<<i <<" "<<j<<"\n";
        }


    //while loop****************************
        // int a=10,b;
        // while(a<20 && b<30){
        //     cout<<"value of a and b:"<<a<<" "<<b<<"\n";
        //     a++,b++;
        // }


    //do while loop***************************
        // int i= 10;
        // do{
        //     cout<<i<<endl;
        //     i++;
        // }while(i<15);


    //table*******************************
        // int a;
        // cout<<"Enter the value for writing table : ";
        // cin>>a;
        // for(int i=1;(a*i)<=(a*10);i++){
        //     cout<<a*i<<endl;
        // }


    //goto (use for jumping)****************************
    /*
        --Also called jump statement in c
        --Used to transfer program control to a predefined label
        --It's use is avoided since it causes confusion for the fellow programmers in understanding the code.
        --Goto statement is preferable when we need to break multiple loops using a single statement at the same time.
        
        --label:{ //statements }; goto label;
    */

        // int age;
        // cout<<"Enter your age : ";
        // cin>>age;
        // if(age>18){
        //     goto greet;
        //     cout<<"Your age is above 18 years"<<endl;
        // }
        // cout<<"Before goto label"<<endl;
        // greet:{
        //     int a = 10;
        //     cout<<"value of a : "<<a<<endl;
        // }
        // cout<<"After goto label"<<endl;

        ////output : control jump from line55 to line59 

    return 0;
}
