#include<iostream>
using namespace std;
int main(){
    // int i=100;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=10);
   
   // int i=10;
   // while(i=20)
   // cout<<"\nA computer buff!";
    
    int x=4,y=0;
    while(x>=0 && y>=0){
        x--;
        y++;
        if(x==y)
            continue;
        else
            cout<<x<<" "<<y<<endl;
    }
}