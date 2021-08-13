/*
  Printing Array Elements in Reverse Order
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of elements you want to enter  in the array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the numbers for the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array You entered: "<<endl;
    for(i=(n-1);i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
