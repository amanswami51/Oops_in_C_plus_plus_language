// //opening file using open() function**************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1 = "\nThis is aman.";
    string s2, s3, s4, s5;

    //writing in the file
        ofstream p1; p1.open("sample.txt"); //We also use only single line of code, "ofstream p1("sample.txt");"
        p1<<"Hello, good morning." + s1<<endl;
        p1<<"I am an engineer.\n";
        p1<<"I am from suratgarh.\n";
        p1.close();

    //read from the file
        ifstream p2; p2.open("sample.txt");  //We also use only single line of code, "ifstream p2("sample.txt");"
        p2>>s2; //This insert first word in st2
        cout<<s2<<endl;

        getline(p2, s3); //This insert one line in st3 variable.
        cout<<s3<<endl; 
        getline(p2, s4); 
        cout<<s4<<endl;

        //first way of reading whole data
        while(p2.eof() == 0)
        {
            getline(p2, s5);
            cout<<s5<<endl;
        }

        //second way of reading whole data
        // char s6[50];
        // while(p2){
        //     p2.getline(s6,50);
        //     cout<<s6;
        // }cout<<endl;

        p2.close();

    return 0;
}