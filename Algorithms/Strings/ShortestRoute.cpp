/*
Program to find shortest route
----> eg. We have NNWEES
                   N=north
                   S=South
                   W=West
                   E=East
So we have to find the shortest route which is having same disapacement as given NNSEWNES in our case.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
        
        char route[1000];
        cin.getline(route,1000);
        int x=0;
        int y=0;
        for(int i=0; route[i]!='\0';i++){
            switch(route[i]){
                case 'E':x++;
                    break;
                case 'W':x--;
                    break;
                case 'N':y++;
                    break;
                case 'S':y--;
                    break;
            }
            
        }
        cout<<"X= "<<x<<"\nY= "<<y<<endl;
        if(x>0 and y>0){
            while(y--){
                cout<<"N";
            }
             while(x--){
                cout<<"E";
            }
        }
        else if(x<0 and y<0){
            while (y--){
                cout<<"S";
            }
             while (x--){
                cout<<"W";
            }
        }
        else if(x<0 and y>0){
            while (y--){
                cout<<"N";
            }
             while (x--){
                cout<<"W";
            }
        }
        else if(x<0 and y>0){
            while (y--){
                cout<<"N";
            }
             while (x--){
                cout<<"W";
            }
        }
        else if(x>0 and y<0){
            while (y--){
                cout<<"S";
            }
             while (x--){
                cout<<"E";
            }
        }
}
