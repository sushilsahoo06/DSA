#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    int a =0;
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
        a=1;
        break;
        }  
    }
    if(n==1) printf("1 is neither prime or not");

    else if (a==0) printf("the given no is prime\n");
    else printf("the given no is comosite");
    getch();
}
//#include <stdio.h>

// int main() {
//     int n, isPrime = 1; // Assuming the number is prime initially
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n == 1)
//         printf("1 is neither prime nor composite\n");
//     else {
//         for (int i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 isPrime = 0; // If divisible by any number, it's not prime
//                 break;
//             }
//         }
//         if (isPrime)
//             printf("%d is a prime number\n", n);
//         else
//             printf("%d is a composite number\n", n);
//     }

//     return 0;
// }
