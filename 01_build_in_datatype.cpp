// Built in data types
/*
    #Data Types :- 
      int : -1, 0, 1
      char : 'a', 'z'
      float : -0.11, 0.12, 3.14
      double : -0.112345678, 3.14159
      boolean(bool) : true, false

    #Token :- smallest individual units in a program.
    #Types of token :- 
      --keywords :- Reserved word. 95 keywords reserved in c++. 
                    some examples are : break,try,catch,char,class,const,
                    default,else,for,float,long,public,return,sizeof,this,enum	
                    throw,switch,namespace,bool,do,double,int,void,union,while
      --Identifiers :- The unique names given to the entities(like variables,functions,classes,structs) are known as identifiers.
      --Constants 
      --Strings :-  In C++, a string is not a built-in data type like ‘int’, ‘char’. 
                    It is a class available in the STL library which provides the functionality to work with a sequence of characters.
                    string variable_name = "This is string";
      --Special Symbols :-Semicolon (;), Square brackets [], Curly Braces {}, Scope resolution (::), 
                          Dot (.), Assignment operator ‘=’, Double-quote (“), Single-quote (‘)
      --Operators :- used to perform operations on operands.
                    1). Unary Operators : used with single operands only.
                        eg:- Increment(++),Decrement(--) operators.
                    2). Binary Operators : used with the two operands to perform the operations.
                        eg:- Arithmetic Operators( +, -, *, /, % )
                            Comparison Operators( ==, !=, <, >, <=, >= )
                            Logical Operators( &&, ||, ! )
                            Assignment Operators( -=, *=, /=, %= )
                            Bitwise Operators( &, |, ^, ~, <<, >> ) 
                    3).Ternary Operators : The ternary operator is the only operator that takes three operands.
                        eg:- Expression1 ? Expression2 : Expression3;
                            If ‘Expression1’ became true then ‘Expression2’ will be executed otherwise ‘Expression3’ will be executed.


    #Rules for variables :-
      1). Variable names in C++ can range from 1 to 255 characters.
      2). Two seprate word contain 'UnderScore', example like father_name.
      3). Case sensitive
      4). No space or special characters allowed.
      5). Not use keywords as a variable name.
      6). First latter not number.


*/

#include <iostream>
using namespace std;

namespace a{
  int val_int =500;
}

int val_int = 100;

int main(){

  int val_int = 200;
  char val_char = 'a';
  float val_float = 3.14;
  double val_double = 3.14159;
  long double val_long_double = 34.4;
  bool val_bool = false;

  cout<<"Value of variables************"<<endl;
  cout <<"Local variable : "<<val_int<<endl;
  cout <<"Global variable : "<<::val_int<<endl; //:: means "Scope Resulation operator"
  cout <<"namespace variable : "<<a::val_int<<endl;
  cout<<"val_char : "<<val_char<<endl;
  cout<<"val_float : "<<val_float<<endl;
  cout<<"val_double : "<<val_double<<endl;
  cout<<"val_long_double : "<<val_long_double<<endl;
  cout<<"val_bool : "<<val_bool<<endl;

  cout<<"Size of variables**************"<<endl;
  cout<<"sizeof(val_int) : "<<sizeof(val_int)<<endl;  //4
  cout<<"sizeof(val_char) : "<<sizeof(val_char)<<endl;  //1
  cout<<"sizeof(val_float) : "<<sizeof(val_float)<<endl;  //4
  cout<<"sizeof(val_double) : "<<sizeof(val_double)<<endl;  //8
  cout<<"sizeof(val_long_double) : "<<sizeof(val_long_double)<<endl; //16 
  cout<<"sizeof(val_bool) : "<<sizeof(val_bool)<<endl; //1

  cout<<"Constant variable****************"<<endl;
  const int a = 3;
  cout<<"a is constant variable that is value not change after declaration : "<<a; 
  return 0;
}