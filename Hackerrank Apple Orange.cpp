#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,s,t,a,o,m,n,temp;
    int apl=0;
    int org=0;

    cin>>s>>t;
    cin>>a>>o;
    cin>>m>>n;

    for(i=0;i<m;i++){
        cin>>temp;
        if((a+temp)>=s and (a+temp)<=t){
            apl++;
        }
        else{
            continue;
        }
    }
    for(i=0;i<n;i++){
        cin>>temp;
        if((o+temp)>=s and (o+temp)<=t){
            org++;
        }
        else{
            continue;
        }
    }
    cout<<apl<<endl;
    cout<<org;

}
