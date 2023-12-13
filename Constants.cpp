//**************Constants, Manipulators & Operator Precedence**************

#include<iostream> //Header file for i/o operations
#include<iomanip> //Header file for using manipulators
using namespace std;//using this while writing cout we dont have to write 'std::' everytime before it

int main()
{
    int a=8;
    cout<<"The value of a was:"<<a<<endl; //will print value of a 8
    a=17; //changed the value of a 8 to 17
    cout<<"The value of a is:"<<a<<endl; //will print value of a 17

   //****Constants in c++****
     const int a=8; //made value of variable a constant means cannnot be changed
     cout<<"The value of a was:"<<a<<endl; //will print value of a 8
     a=17; //will cause here error because value of a is constant it cannot be changed
     cout<<"The value of a is:"<<a<<endl; //will print value of a 17

    //****Manipulators in C++****
    //manipulators helps to manipulate the view or manage how the output will get displayed 
    //1)endl
    //2)setw(Comes from iomanip header file that we imported)while printing o/p on console
       // it will take the space we set and then willprint o/p(like <<setw(4)<<a<<endl)
  
   /int a=8, b=17, c=16; //created 3 variables a,b,c
    //without setw
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;
    cout<<"/***********/"<<endl;
    //with setw(while printing output it will take 4 characters space then print o/p)
    cout<<"The value of a is:"<<setw(4)<<a<<endl;
    cout<<"The value of b is:"<<setw(4)<<b<<endl;
    cout<<"The value of c is:"<<setw(4)<<c<<endl; 

    //****Operator Precedence****(Means which operator will get solved first)
    //precedence means which operator will first get executed
    int a=3, b=4;
    int c= (((a*5)+b)-8)+17; //by operators precedence and associativity it will get solved first
                          //for more about this refer website"cpprefrence.com(operator precedence)"
    cout<<c; 
 return 0;
}