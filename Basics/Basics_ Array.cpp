/* We will create an array of size 5 */
#include<iostream>
#include<stdio.h> //we can use C functions by including IO console
using namespace std;
int main()
{
    int i=0;
    int A[5]; //size is 5 so only 5 elements can be added
    int B[]={1,2,3,4,5,6,11,45,12,13}; //We initialized an array without defining its size first so we can add as much elements in it as we wish
    int C[10]={1,2,34};
    A[0]=2; //we put 2 as first element off array which is at 0th address
    A[2]=3;
    A[1]=1;
    A[4]=6;
    A[3]=9;
    cout<<"size of A:"<<sizeof(A)<<endl; //size of int is 4 so size of array= 4*5==20
    cout<<"A[1] :"<<A[1]<<endl;
    cout<<"size of B:"<<sizeof(B)<<endl; //size of int is 4 so size of array= 4*10==40
    printf("A[2]:%d\n",A[2]);
    cout<<"size of C:"<<sizeof(C)<<endl;
    printf("A[2]: %d\n",C[8]);
    
    // accessing all elements of array using loop
    for(i=0;i<12;i++)
        {
            cout<<"Value:"<<B[i]<<endl;
            //for elements after 10 garbage values will be prnted as there are no elements
        }
}

/* OUTPUT
  size of A:20
  A[1] :1
  size of B:40
  A[2]:3
  size of C:40
  A[2]: 0 ---------> No element exist here GARBAGE VALUE
  Value:1
  Value:2
  Value:3
  Value:4
  Value:5
  Value:6
  Value:11
  Value:45
  Value:12
  Value:13
  Value:733758765 ---------> No element exist here GARBAGE VALUE
  Value:22010 ---------> No element exist here GARBAGE VALUE
  
 *\
