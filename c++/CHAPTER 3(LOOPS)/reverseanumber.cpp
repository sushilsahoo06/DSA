#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;               //if n=1234 than 
    int r=0;              //n=1234->123->12->1
    while(n!=0){          //r=4->40+3->430+2->4320+1
        int ld = n%10;    //ld=4->3->2->1
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout<<r+n<<endl;

}