#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st no.";
    cin>>a;
    int b;
    cout<<"enter 2nd no.";
    cin>>b;
    int c;
    cout<<"enter 3rd no.";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greatest";
        }
        else{
            cout<<"c is greatst";//by neasted rule
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
    
}