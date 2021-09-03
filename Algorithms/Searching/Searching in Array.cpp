#include<bits/stdc++.h>
using namespace std;

int search(int A[],int x,int N){
    int i,r;
    for(i=0;i<N;i++){
        if(x==A[i]){
            r=1;
            break;
        }
        else{
            r=0;
        }
    }
    return r;
}

int main(){
    int N,i,x,result;
    //cout<<"Enter No of Elements: "<<endl;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    //cout<<"Enter No which is to search: "<<endl;
    cin>>x;
    result=search(A,x,N);
    //cout<<"Result  "<<result<<endl;
    if(result==1){
        cout<<"Number found !"<<endl;
    }
    else{
        cout<<"Not Found! "<<endl;
    }
    
 }
