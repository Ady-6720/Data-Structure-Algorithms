/*
Program to calculate number of Alphabets, Digits & Spaces in given string
*/

#include<bits/stdc++.h>
using namespace std;
 int main(){

     
     char ch;
     ch=cin.get();
     int alpha=0;
     int num=0;
     int space=0;
     while(ch!='\n'){

         if(ch>='0' and ch<='9'){
             num++;
         }
         else if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
             alpha++;
         }
         else if(ch==' ' or ch=='\t'){
             space++;
         }
         ch=cin.get();
    }

    cout<<"Alphabets = "<<alpha<<"\nNumbers= "<<num<<"\nSpaces= "<<space<<endl;
 }
