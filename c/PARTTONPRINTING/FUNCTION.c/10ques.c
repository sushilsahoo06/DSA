#include<stdio.h>
#include<conio.h>
int factorial(int x){
    int fact =1;
    for (int i =1;i<=x;i++){
    fact = fact *i;
    }
    return fact;
}
int combination(int i,int j){
    int icj=factorial(i)/(factorial(j)*factorial(i-j));
    return icj;
}

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    getch();
}