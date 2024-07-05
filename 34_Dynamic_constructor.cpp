#include<iostream>
#include<string.h>
using namespace std; 

class concept{
    char *name;
    int length;
    public:
        concept(){
            length = 0;
            name = new char[length+1];
        }
        concept(char *s){
            length = strlen(s);
            name = new char[length+1];
            strcpy(name,s);
        }
        void display(){
            cout<<name<<endl;
        }

        //Add two string
        void join(concept &x, concept &y){
                length = x.length + y.length;
                delete name;
                name = new char[length+1];
                strcpy(name,x.name);
                strcat(name,y.name);
        }
};

int main(){
        char *first = "Engineer ";
        char *middle = "Aman ";
        concept n1(first),n2(middle),n3("Swami");
        n1.display();
        n2.display();
        n3.display();

        //Add two string
        concept s1;
        s1.join(n1,n2);
        s1.display();

        concept s2;
        s2.join(s1,n3);
        s2.display();
    return 0;
}

