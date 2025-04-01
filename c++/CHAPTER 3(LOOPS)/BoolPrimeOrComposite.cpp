#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    bool x= true;//true means prime
    for(int i=2;i<=n;i++){
        if(n%i==0){
            x= false;
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(x == true)cout<<"prime";
    else cout<<"composite";


}