//combinaction and permutation
#include<stdio.h>
#include<conio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combinaction(int n,int r){
    int ncr =factorial(n) /(factorial(r) * factorial(n-r));
    return ncr;
}

int main(){
    int n;
    printf("enter n :");   
    scanf("%d",&n);
    int r;
    printf("enter r :");
    scanf("%d",&r);
    //int nfact =factorial(n);
    //int rfact =factorial(r);
    //int nrfact =factorial(n-r);
  
    int ncr = combinaction(n,r);
    printf("%d",ncr);
    return 0; 

}
