#include<iostream>
#include<functional>
#include<algorithm>

using namespace std; 

int main(){
    
    //Function Objects(Functor): Function wrapped in a class so that it available like an object. For example : greater<int>()
    int arr[] = {1,30,4,12,544,77};
    sort(arr,arr+5);    //sort till 5 in increasing order
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    sort(arr,arr+5,greater<int>());    //sort till 5 in decreasing order
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}