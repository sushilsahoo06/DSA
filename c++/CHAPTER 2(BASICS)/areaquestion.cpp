#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length :";
    cin>>l;
    int b;
    cout<<"Enter the breth :";
    cin>>b;
    cout<<"the area is :"<<l*b<<endl;
    cout<<"the perimeter is :"<<2*l*b<<endl;
    if(l*b>2*l*b){
        cout<<"Area is greater than perimeter ";
    }
    else{
        cout<<"perimeter is greater than area";
    }
}