//************C++ Reference Variables & Typecasting***********
#include<iostream> //header file
using namespace std;

int c=8; //Global variable
int main() //main function
{
    //*******Built in Data Types & Scope Resolution Operator************

   int a, b, c; //variable declaration
   cout<<"Enter the value of a: " <<endl; //will prompt user to enter value for a
   cin>>a; //take in the value and store it in to produce resilts
   cout<<"Enter the value of b: " <<endl; //will prompt user to enter value for b
   cin>>b;
  c=a+b; //c will be the addition of a and b
  cout<<"The sum is=" <<c <<endl; //will print the sum of a and b
  //created cout for printing value of global variable also
  cout<<"The value of Global Variable is: " <<::c; //used'::'scope resolution operator to get value of global variable if not used this then will print value of local variable
 



 //*******float,double,Long double Literals************

  float d= 34.4f; //created 2 variables d & e
  long double e= 34.4l;
 //By default the value between float and double will always be double if both are same.
 //so to avoid confusion while doing function overloading we use 'f' for float & 'l' means long double for double.
 
  cout<<"The value of d is:"<<d<<endl<<"The value of e is:"<<e; //to print value of d and e




 //*******Referance Variables************
  float x=455; //created variable anmed x
  float & y=x; //means created new reference variable'y' which will also have same value as 'x'variable
  cout<<"This is value of x:"<<x<<endl<<"This is value of y:"<<y <<endl; //to print x & y value

  
  
  
  
  
  //*******TypeCasting************
//using this we can convert one datatype of variable to another type
int a = 45;
float b= 45.54;
cout<<"This is value of a:" <<a <<endl;
cout<<"This is value of b:" <<b <<endl;
cout<<"This is value of b:" <<(int)b <<endl; //here dataType of variable b gets changed into int from double using typecasting
cout<<"This is value of b:" <<int(b) <<endl;//2nd way to write same line 38
    return 0;
}

