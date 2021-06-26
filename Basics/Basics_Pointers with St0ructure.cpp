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
     struct Rectangle *p;
     p= new Rectangle;
     
     p->length=20;      // arrow function id=s used to give value to pointer, pointing to a structure
     p->breadth=10;
     
   
     cout<<"Length= "<<p->length<<endl;   //to get values from pointer use arrow i.e ->
     cout<<"Breadth= "<<p->breadth<<endl;
}


/*    
    OUTPUT
                Length= 20
                Breadth= 10
                
 */
