#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number :";
    // cin>>n;
    // if(n>=0){
    //     cout<<n;
    // }
    // else{
    //     cout<<-n<<endl;

    // }
   //if(n<0) n=-n;
   // cout<<n<<endl;
    int cp;
    cout<<"enter cost price :";
    cin>>cp;
    int sp;
    cout<<"enter selling price :";
    cin>>sp;
    if(cp>sp){
        cout<<"loss :"<<cp-sp;
    }
    else if(cp<sp){
        cout<<"profit :"<<sp-cp;
    }
    else{
    cout<<"no ioss : no profit";
    }
}
