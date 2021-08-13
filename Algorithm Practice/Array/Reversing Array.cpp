/*
  Reversing array elements (not printing)
*/
 
 #include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n){
    int e,s=0;
    e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
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
    reversearray(a,n);
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    return 0;
}
