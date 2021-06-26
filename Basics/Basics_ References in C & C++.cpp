/*
When a variable is declared as a reference, it becomes an alternative name for an existing variable.
A variable can be declared as a reference by putting ‘&’ in the declaration. 
*/

#include <iostream>
using namespace std;
int main()
{
    int a=10; //initialization of a variable
    int &r=a; //initialization of reference
    
    //Using reference to increase value of a
    cout<<a<<endl;
    r++; //increasing value of r
    cout<<a<<endl; // see at output we can see the increse in value of a as we incresed r, r doesnt consumes any memory unlike pointer
    // We canuse reference and can manipulate value of variable which refr is refering
    r=r-3;
    cout<<a<<endl;
}


/*
    Output
    10
    11
    8
*/    
