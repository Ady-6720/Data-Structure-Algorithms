/*
  You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. 
  They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int i,big,tallc=0;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    big=a[0];
    for(i=0;i<n;i++){
        if(big<a[i]|| big==a[i]){
            big=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(big==a[i])tallc++;
        else{
            continue;
        }
    }    
    cout<<tallc<<endl;
    return 0;
}
