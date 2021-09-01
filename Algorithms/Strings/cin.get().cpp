/*
cin.get() is used for accessing character array. It includes white space characters.
Generally, cin with an extraction operator (>>) terminates when whitespace is found. However, cin.get() reads a string with the whitespace.
*/


#include<bits/stdc++.h>
using namespace std;
    
int main(){
    char your_name[1000];
    char temp=cin.get();
    int len=1;
    cout<<"Output String:  "
    while(temp!='\n'){
        len++;
        cout<<temp;
        temp=cin.get();
    }
    cout<<endl;
    cout<<"Length ="<<len<<endl;
}
