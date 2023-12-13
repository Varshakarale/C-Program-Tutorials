//Variables in C++
#include<iostream> //Header File
using namespace std;

char alpha= 'v'; //global variable


int main() //main function
{
    //   int a= 8;
    //   int b= 17;
    int a=8, b=17;
    float salary= 40.000;
    char alpha= 'S'; //local variable
      cout<< " This is value of a:" <<a<< " This is value of b:"<<b <<endl;
      cout<< "The salary of employee is: " <<salary <<endl;
      cout<< "most used character is: " <<alpha; //to get the value of global variable we can use '::'scope resolution operator here too
      return 0;

}
// RULES TO DECLARE VARIABLES IN C++
// - Variable names in C++ can range from I to 255 characters.
// - All variable names must begin with a letter of the alphabet or an underscore(_).
// - After the first initial letter, variable names can also contain letters and numbers.
// - Variable names are case sensitive.
// - No spaces or special characters are allowed.
// - You cannot use a C++ keyword (a reserved word) as a variable name.