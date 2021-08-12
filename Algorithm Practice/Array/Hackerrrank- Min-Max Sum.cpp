/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.
 
 Print
      Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format
      A single line of five space-separated integers.

Output:
      A single line spaced output



*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int i,big,small,sum=0,s1=0,s2=0;
    int a[5];
    for(i=0;i<5;i++){
        cin>>a[i];
        sum+=a[i];
    }
    big=small=a[0];
    for(i=0;i<5;i++){
        if(big<a[i]|| big==a[i]){
            big=a[i];
        }
        else if(small>a[i] || small==a[i]){
            small=a[i];
        }
     
    }
    s1=sum-big;
    s2=sum-small;
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
