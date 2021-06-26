#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle      // Initialization of structure Rectangle
{
    int length;
    int breadth;
};

int main()
{
     Rectangle r={10,15};   // initializing vaues of Length and breadth in rectangle r
     cout<<"Length= "<<r.length<<endl;  //to get values
     cout<<"Breadth= "<<r.breadth<<endl;  //to get values
     
     cout<<"____________________________________________"<<endl;
  
     cout<<"Getting values of variables using pointer"<<endl;
     
     Rectangle *p=&r;                     //Initializing pointer "p" for structure rectangle "r"
     cout<<"Length= "<<p->length<<endl;   //to get values from pointer use arrow i.e ->
     cout<<"Breadth= "<<p->breadth<<endl;
}


/*    
    OUTPUT
                Length= 10
                Breadth= 15
                ____________
                Length= 10
                Breadth= 15
  */
