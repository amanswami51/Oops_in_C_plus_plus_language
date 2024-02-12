#include<iostream>
using namespace std; 

class base{
    protected:
        int a;
    private: 
        int b;
};
/* 
                          public derivation  private derivation  protected derivation
1.private memebers        not inherited       not inherited       not inherited
2. protected memebers     protected           private             protected
3. public members         public              private              protected
*/

class derived:base{

};
int main(){
    base base1;
    derived D1;
    cout<< base1.a;
    cout<< D1.a;
    return 0;
}