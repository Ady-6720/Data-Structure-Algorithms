#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int A[],int N){
    int i,itr,step;
    for(itr=0;itr<=N-1;itr++){
        for(i=0;i<N-itr-1;i++){
            if(A[i]>A[i+1]){
                swap(A[i],A[i+1]);
            }
        }

    }
}


int main(){
    int N,i,j;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    }

    BubbleSort(A,N);
    for(i=0;i<N;i++){
        cout<<A[i]<<endl;
    }

    
}
