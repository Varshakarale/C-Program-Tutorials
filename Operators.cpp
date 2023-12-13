//There are two types of Header files:
//1)System Header Files: Comes with compiler
//2)User define Header Files: Created by user or programmer
#include <iostream> // system header file
using namespace std;
int main()
{
  int a=2, b=4; //variable declaraation
 //operators in C++ :
 // 1)Arithmatic Operators= 
cout<<"The value of a+b is:"<<a+b <<endl; //for addition
cout<<"The value of a-b is:"<<a-b <<endl; //subtraction
cout<<"The value of a*b is:"<<a*b <<endl; //multiplication
cout<<"The value of a/b is:"<<a/b <<endl; //division
cout<<"The value of a%b is:"<<a%b <<endl; //modulus
cout<<"The value of a++ is:"<<a++ <<endl; //increment
cout<<"The value of a-- is:"<<a-- <<endl; //decrement
cout<<"The value of ++a is:"<<++a <<endl; 
cout<<"The value of --a is:"<<--a <<endl;

//Assignment Operators: ->Use to assign values to variables
 int a=10, b=100;
 char alphabets= 'V';

//Comparison Operators: ->Use to Compare 2 values
cout<< "The value of a == b is:" <<(a==b)<<endl;
cout<< "The value of a != b is:" <<(a!=b)<<endl;
cout<< "The value of a > b is:" <<(a>b)<<endl;
cout<< "The value of a < b is:" <<(a<b)<<endl;
cout<< "The value of a >= b is:" <<(a>=b)<<endl;
cout<< "The value of a <= b is:" <<(a<=b)<<endl;

//Logical Operators: -> related with comaparison operators
cout<< "The value of this logical and operator is:" <<((a==b) && (a<b))<<endl; //'&&'Logical and operator
cout<< "The value of this logical or operator is:" <<((a==b) || (a<b))<<endl; //'||'Logical or operator
cout<< "The value of this logical not operator is:" <<(!(a==b))<<endl;//logical not.this prints the opposite value of exact correct value
return 0;
}