// Function= Is a group of instructions which performs some operations.
//by using functions we can repeat an operation many times as we wish by calling it and feeding values to it
// Program length will be reduce by using Functions
// Function is the thrust of Modular or Procedural programming.
// Reusability and productivity of program will increase by using functions
#include<iostream>
#include<stdio.h>
using namespace std;

void myFunction(float a, float b, float c) 
  /*                ^
                    |
    the varibles in bracket are parameters to be passed to function,
    these should be declared in mathematical and arithematic operations
  */
{
  // code to be executed
  /*
  Here we built a function which will calculate the percentage of the student and will tell the
  pwecentage and will determine tha either the student is passed or failed.
  */
    float result; // taken in float as percentage will come in float 
    result=(a+b+c)/3 ;
   
    cout<<"Result= "<<result<<"%"<<endl;
    if(result>=45) // if the percentage are greater or equal to passing percentage then this loop will get executed
        {
            cout<<"Passed !!"<<endl;
        }
        else //else this statement will get executed 
        {
            cout<<"Failed !"<<endl;
            
        }
  
} //end of function block

int main()
{
    float p,c,m;
    cout<<"Enter your Physics Chem Maths marks out of 100: "<<endl;
    cin>>p>>c>>m; // taken marks in order
    myFunction(p,c,m); // called the myFunction we created at the top
    //now the variables p,c,m have some values that user fed , these values will be passed as parameter to myFunction.
}
