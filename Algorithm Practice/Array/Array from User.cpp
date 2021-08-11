//Taking inputs for the array from the user and then printing the array elements on one single line
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    int marks[n];
    cout<<"Enter number of marks you want to enter."<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>marks[i];
    }
    for(j=0;j<n;j++){
        cout<<" ";
        cout<<marks[j];
    }
}
