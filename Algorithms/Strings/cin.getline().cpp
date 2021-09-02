/*
Since cin does not read complete string using spaces, stings terminates as you input space.
While cin. getline() – is used to read unformatted string (set of characters) from the standard input device (keyboard).
This function reads complete string until a give delimiter or null match.
*/
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    char Sentence[1000];
    cin.getline(Sentence,1000);
    cout<<"Sentence: \n"<<Sentence<<endl;
    cout<<"Length ="<<sizeof(Sentence)<<endl;
}
