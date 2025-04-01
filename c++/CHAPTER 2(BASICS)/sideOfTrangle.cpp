#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"the frist number is :";
    cin>>x;
    int y;
    cout<<"the second number is :";
    cin>>y;
    int z;
    cout<<"the third number is :";
    cin>>z;
    //if((x+y)>z && (x+z)>y && (y+z)>x){
    //    cout<<"this number can be triangle";
   // }
   // else{
    //    cout<<"this nuber can not be triangle";
   // }
    if(x>(y,z)){
        cout<<"x is a greater number";
    }
    else if(y>(z,x)){
        cout<<"y is a greater number";
    }
    else{
        cout<<"z is a grater number";
    }
}