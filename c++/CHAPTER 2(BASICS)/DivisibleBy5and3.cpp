#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"n is divisibe by 5 and 3";
    }
    else{
        cout<<"n is not divisible by 5 and 3";
    }

}
