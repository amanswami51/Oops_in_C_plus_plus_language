//An array is a collection of similar elements.
#include<iostream>
using namespace std;

int main(){
    //First way of creating an array**********
        int marks[10];
        marks[0] = 81;
        marks[1] = 76;
        marks[2] = 92;
        marks[5] = 84;
        cout<<marks[0]<<" "<<marks[1]<<" "<<marks[5]<<endl;

    //second way of creating an array*********
        int arr[] = {10,2,8,4,55,6};
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[5]<<endl;
        int lenght = sizeof(arr)/sizeof(arr[0]);
        cout<<"Length of arr is : "<<lenght<<endl;
        cout<<"Your arr is : ";
        for(int i=0; i<lenght; i++){
            cout<<arr[i]<<" ";
        }

    //Third way of creating an array***********
        int n;
        cout<<endl<<"Enter the length of array : ";
        cin>>n;
        int array[n];
        cout<<"Enter values of array : ";
        for(int i=0; i<n; i++){
            cin>>array[i];
        }
        cout<<"Your array is : ";
        for(int i=0; i<n; i++){
            cout<<array[i]<<" ";
        }
    return 0;
}