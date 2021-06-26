// Online C++ compiler to run C++ program online
#include <iostream>
#include<stdio.h>
using namespace std;

struct Rectangle //initialization of structure
    {
        int length; //Initializing object in structure
        int breadth;
    }; // as it have 2 int it will occupy 8 byts of size
 struct Names //initialization of structure
    {
        char first_name[10]; //Initializing object in structure
        char middle_name[10];
        char surname[10];
    }; // as it have 3 strings each of size 10 so, it will occupy 30 byts of size i.e 10*3
       
    
int main() 

    {
      
        struct Rectangle r1={10,30}; //calling structure and initializing its two parameters or objects
        cout<<"Size of Rectangle Structure:  "<<sizeof(Rectangle)<<endl;
         cout<<"Accessing elements of Rectangle structure"<<endl;
         cout<<"\nlength: "<<r1.length<<"\nBreadth: "<<r1.breadth<<endl;
        cout<<"----------------------------"<<endl;
        struct Names n1={"Aditya","D","Malode"};
        cout<<"\nSize of Names Structure:  "<<sizeof(Names)<<endl;
        cout<<"Accessing elements of Names structure"<<endl;
        cout<<n1.first_name<<" "<<n1.middle_name<<" "<<n1.surname<<endl;
        
        return 0;
    }





/* OUTPUT: 
        Size of Rectangle Structure:  8
        Accessing elements of Rectangle structure

        length: 10
        Breadth: 30
        ----------------------------

        Size of Names Structure:  30
        Accessing elements of Names structure
        Aditya D Malode
