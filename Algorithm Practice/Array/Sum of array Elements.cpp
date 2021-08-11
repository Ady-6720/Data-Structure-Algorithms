// Taking array from user and then finding Sum and Average of array elements


#include<iostream>
using namespace std;


int main(){
    int n,i,j,k,sum=0;
    double avg;
    int marks[n];
    cout<<"Enter number of marks you want to enter."<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>marks[i];
    }
    cout<<"Array: ";
    for(j=0;j<n;j++){
        cout<<" ";
        cout<<marks[j];
    }
    cout<<endl;
    for(k=0;k<n;k++){
        sum+=marks[k];
    }
    cout<<"sum of array elements= "<<sum<<endl;
    cout<<"Average of array elements= "<<sum/n<<endl;
}
