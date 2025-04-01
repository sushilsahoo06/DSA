#include<iostream>
using namespace std;
int main(){
    int ram;
    cout<<"Enter Age of ram : ";
    cin>>ram;
    int shaym;
    cout<<"Enter Age of shaym :";
    cin>>shaym;
    int ajay;
    cout<<"Enter Age of ajay:";
    cin>>ajay;
    if(ram>shaym){
        if(ram>ajay){
            cout<<"ram is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }
    }
    else{
        if(shaym>ajay){
            cout<<"shaym is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }
    }
       
    
}
    
