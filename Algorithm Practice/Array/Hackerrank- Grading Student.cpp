/*
HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100.
Any  less than 38 is a failing grade.
Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3 , round  up to the next multiple of 5 .
If the value of  is less than 38, no rounding occurs as the result will still be a failing grade.
*/

#include<bits/stdc++.h>
using namespace std;

int roundoff(int mr){
    if((mr+2)%5==0)mr+=2;
    else if((mr+1)%5==0)mr+=1;
    else{
        mr=mr;
    }
    return mr;
}



int main(){
    int n,marks,mr,i,j;
    cin>>n;
    int arr[n],farr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>40){
        farr[i]=roundoff(int (arr[i]));
        }
        else{
            farr[i]=arr[i];
        }
    }
    for(i=0;i<n;i++){
        cout<<farr[i]<<endl;
    }
    
}
