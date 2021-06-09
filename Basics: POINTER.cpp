//POINTERS
//pointer is a address variable , it will store addres  of data not the data ,they are used to access data indirectly
//pointers are used to access HEAP memory
//HEAP MEMORY
//Pointer is also used to access some data which is external to program or accessing the resources
//Pointers are also used for passing parameters
#include <iostream>
#include<stdio.h>
using namespace std;


int main() {
   int a=10; //Variable 
   int *p; //Declaration of Pointer 
   p=&a; //initializing pointer to store address of data at variable a
   cout<<"Value of a:  "<<a<<endl;
   cout<<"Adress stored at pointer P:  "<<p<<endl; //it will change everytime as it is dynamic
   cout<<"Pointer value(Value at adress stored in p): "<<*p<<endl;//*p is it will go to the adress and will get the value 
   
   cout<<"\n\n-------Creating An array in the heap-----------\n\t\t\t\t\t&\n-------accessing Elements using for loop-------"<<endl;
   int *q;
   q=new int[5]; //we used this to access array inside heap
   q[0]=10;q[1]=12;q[2]=22;q[3]=45;q[4]=123;
   for(int i=0;i<5;i++)
      {
          cout<<q[i]<<endl;
      }
   return 0;
}
  
  
  /* OUTPUT:
              Value of a:  10
              Adress stored at pointer P:  0x7ffe334b9fe0
              Pointer value(Value at adress stored in p): 10


              -------Creating An array in the heap-----------
                        &
              -------accessing Elements using for loop-------
              10
              12
              22
              45
              123
