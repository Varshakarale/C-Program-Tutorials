//***********C++ Control Structures, If Else and Switch-Case Statement ********************
/*There are 3 types of Control Structures:
1)Sequence Structure(Regular basic program works like this structure)
2)Selection Structure(if-else/switch-case)
3)Loop Structure(while-dowhile)*/

#include<iostream> //Header file for i/o operations
using namespace std;

int main() //main function
{
    //*******Selection Control Structure: if-else simple & ladder************

    int age; //variable declaration of variable named age
    cout<<"Enter your Age:"<<endl; //prompt user to enter their age
     cin>>age;     //take in the age and store it to produce o/p(Entered value gets stored in variable age)
    
    //if-else statement
     if(age<18) //condition applied that if age is less than 18 then print following message
     {
       cout<<"You are not eligible for this position."<<endl; //print to console
     }
     else if(age>=18) //another if condition is applied that if age is greater than or equal to 18 then print following
     {
     cout<<"You are eligible for this position."<<endl;
     }

    //***********Selection Control Statement: Switch-Case Statements**************
    switch (age) //it will check the value of variable age
    {
    case 18: //1st case asks that if age is 18 then print following message
       cout<<"You are 18."<<endl; //will print this on console
        break; //if this case is true then it will stop this switch case structure without executing
              //following cases and will jump to line 46 outside the switch case & will print that
    case 22: //2nd case
       cout<<"You are 22."<<endl;
        break;
   
    case 2: //3rd case
       cout<<"You are 2."<<endl;
        break;
    
    default: //if following 3 cases are false then will execute this default case
       cout<<"No special cases."<<endl;
        break;
    }
    cout<<"Done with switch case statements.";//after executing one of the cases from switch case
    //then this will print everytime.
    
return 0;
}