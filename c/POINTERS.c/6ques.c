#include <stdio.h>

int main() {
    int n = 50;
    int *p = &n; // Corrected to use the address of operator

    printf("address of n = %p\n", (void *)p); // %p for pointers
    printf("sum = %d\n", *p + 3);              // %d for integers
    printf("difference = %d\n", *p - 10);      // %d for integers
    printf("product = %d\n", *p * n);          // %d for integers
    printf("division = %d\n", *p / 5);         // %d for integers
    printf("remainder = %d\n", *p % 2);       // %d for integers

    return 0;
}
