#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int count=0;
    // while(n>0){
    //     n=n/10;
    //     count++;
    // }
    // cout<<count<<endl;   (count)

    // int sum = 0;
    // while (n!=0)
    // {
    //     int ld = n%10;
    //     n /= 10;//n=n/10
    //     sum += ld;
    // }
    // cout<<sum;    (sum)

    // int product = 1;
    // while (n!=0)
    // {
    //     int ld = n%10;
    //     n /= 10;//n=n/10
    //     product *= ld;
    // }
    // cout<<product;     //(product)
    
    int sum=0;
    while(n>0){
        int ld=n%10;
        if(ld%2==0){
            sum +=ld;
       }
       n /= 10;
    }
     cout<<sum<<endl;
}