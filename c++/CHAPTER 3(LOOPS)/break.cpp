#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. :";
    cin>>n;
    int f =1;// store highest factor
    for(int i=1;i<n;i++){
        if(n%i==0) f=1;
    }
    cout<<f;
    
    //  for(int i=n/2;i>=1;i--){
    //      if(n%i==0) {
    //          cout<<i<<" ";
    //          break;
    //      }
    //  }
    
}

