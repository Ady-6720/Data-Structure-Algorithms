// Parameter Passing 
//Function= Is a group of instructions which performs some operations.
// Two main types--> Pass by value & Pass by reference
// pass by value
// In pass by value the values of actual variables num1 and num2 will not change as we are passing just tehir values to a & b 

#include<iostream>
#include<stdio.h>
using namespace std;

int add(int a, int b)
{
    int s;
    s=a+b;
    return s;
}

int main()
{
    int num1=10,num2=15,sum;
    sum=add(num1,num2);
    cout<<"Sum is "<<sum<<endl;
    cout<<"num1= "<<num1<<endl; //see in output values of num1 is same as we assigned to them
    cout<<"num2= "<<num2<<endl; // also num2 is the same 
    return 0;
    
}


/*
      OUTPUT
    Sum is 25
    num1= 10      <------Values are unchanged
    num2= 15      <------Value is unchanged
*/
