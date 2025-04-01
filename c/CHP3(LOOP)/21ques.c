#include <stdio.h>
#include<conio.h>

int main() {
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci Series: %d %d", a, b);

    for (int i = 1; i < 6; i++) {
        nextTerm = a + b;
        printf(" %d", nextTerm);
        a = b;
        b = nextTerm;
    }

    getch();
}