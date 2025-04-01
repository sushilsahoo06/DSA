#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x :";
    cin>>x;
    int y;
    cout<<"enter y :";
    cin>>y;
    // if(x>0,y>0){
    //     cout<<"the point lies frist quadrant";
    // }
    // else if(x<0,y>0){
    //     cout<<"the point lies second quadrant";         
    // }
    // else if(x<0,y<0){
    //     cout<<"the point lies third quadrant";
    // }
    // else if(x>0,y<0){
    //     cout<<"the point lies fourth quadrant";
    // }
    // else if(x>0,y=0){
    //     cout<<"the point lias x asis";
    // }
    // else if(x=0,y<0){
    //     cout<<"the point lies y axis";
    // }
    // else{
    //     cout<<"the point lies in the origen";
    // }
    if(x>0){
        if(y>0){
            cout<<"the point lies frist quadrant";
        }
        else if(y<0){
            cout<<"the point lies rourth quadrant";
        }
        else{
            cout<<"the point lies on the x axis";
        }
    }
    else if(x<0){
        if(y>0){
            cout<<"the point lies second quadrant";
        }
        else if(y<0){
            cout<<"the point lies third quadrant";
        }
        else{
            cout<<"the point lies on the y axis";
        }
    }
    else{
        cout<<"the point lies on the origin";
    }

}