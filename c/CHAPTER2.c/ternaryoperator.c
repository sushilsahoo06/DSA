//expression1 ? exp2 : exp3
#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Enter four positive integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                printf("The greatest integer is: %d\n",num1);
            } else {
                printf("The greatest integer is: %d\n", num4);
            }
        } 
        else {
            if (num3 > num4) {
                printf("The greatest integer is: %d\n", num3);
            } else {
                printf("The greatest integer is: %d\n", num4);
            }
        }
    }
     else {
        if (num2 > num3) {
            if (num2 > num4) {
                printf("The greatest integer is: %d\n", num2);
            } else {
                printf("The greatest integer is: %d\n", num4);
            }
        } 
        else {
            if (num3 > num4) {
                printf("The greatest integer is: %d\n", num3);
            } else {
                printf("The greatest integer is: %d\n", num4);
            }
        }
    }

    return 0;
}