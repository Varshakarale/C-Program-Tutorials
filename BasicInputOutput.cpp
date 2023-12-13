//***************Basic Input/Output Operations in c++**************
#include<iostream> //header file
using namespace std;//using this while writing cout we dont have to write 'std::' everytime before it

int main() //main function
{
 int num1, num2;
 cout<< "Enter the value of Num1:\n";   //'<<' this is an insertion operator(To enter something in the system)
 cin>> num1;  //'>>'this is an Extraction operator(It takes the input in and stores it in to give results)

cout<< "Enter the value of Num2:\n ";
cin>> num2;

cout<< " The sum is: " << num1+num2;
 return 0;
}