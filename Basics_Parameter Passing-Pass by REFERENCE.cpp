// Parameter Passing- PASS BY REFERENCE 
//In pass by reference we are passing the adresses of variables so after the execution of funct the values at a&b will get affected
 
#include<iostream>
#include<stdio.h>
using namespace std;

int swap(int *x, int *y) // to pass by REFERENCE we have to use pointers 
{
    int temp; //we will use temp variable for sake of swapping operation
    temp=*x;  
    *x=*y;
    *y=temp;
    
}

int main()
{
    int a,b;
    cout<<"Enter two numbers to swap them : "<<endl;
    cin>>a>>b;
    cout<<"values before execution:\n"<<"A= "<<a<<"\nB= "<<b<<endl;
    swap(&a,&b);      //here & is used as we have to pass the references to pointers that these will contain the addresses of variable a&b
    cout<<"\n \nValues after Swap: "<<endl;
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
    return 0;
    
}


/*
        ---------------------OUTPUT----------------------
        Enter two numbers to swap them : 
        44                          <-----entered value
        30                          <-----Entered value
        values before execution:
        A= 44
        B= 30


        Values after Swap: 
        A= 30
        B= 44

        
        
        
*/
