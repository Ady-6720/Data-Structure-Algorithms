#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
                        //return a>b; -----------> to get list in descending order
                        //return a<b; -----------> ...............Ascending order
}

int main(){
    int N,i,j;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N, compare);   //----------->Inbuilt Sort function O(logn)
    for(int x: A){
        cout<<x<<" ";
    }
    
}
