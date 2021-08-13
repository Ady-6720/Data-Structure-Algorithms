/*
  In this program we will pair array elements with other consecutive array elements
  eg. We have n=5
      array Elements: 1 2 3 4 5
      Output will be:
                      1 2|1 3|1 4|1 5|
                      2 3|2 4|2 5|
                      3 4|3 5|
                      4 5|
*/

#include<bits/stdc++.h>
using namespace std;

void pairing(int arr[],int n){
    int e,j,i,s=0;
    for(i=0;i<n;i++){
        e=arr[i];

        for(j=i+1;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<"|";
        }
        cout<<endl;
    }

}

int main(){
    int n,i;
    cout<<"Enter the number of elements you want to enter  in the array : "<<endl;
    cin>>n;
    int a[n];
    int swaparr[n];
    cout<<"Enter the numbers for the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    pairing(a,n);
    return 0;
}
