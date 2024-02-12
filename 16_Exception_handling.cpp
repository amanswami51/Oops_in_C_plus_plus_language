/*
    #Exception handling
        --Hit the exception
        --Throw the exception
        --Catch the exception
        --Handle the exception
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"This is Exception handling in c++."<<endl;
    int a,b;
    cin>>a>>b;
    int x = a-b;
    try{
        if(x!=0){
            cout<<a/x;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Exception caught : x = "<<x<<endl;
    }
    cout<<"End";

    return 0;
}