
#include<stdio.h>
#include<conio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum: %d", sum(n));
    return 0;
}

int sum(int n){
    if (n == 0 || n == 1)
        return n;
    
    return n + sum(n - 1);
}
