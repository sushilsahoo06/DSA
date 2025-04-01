//#include<stdio.h>

// int main(){
//     int x,y;
//     x =5;
//     y=(x++)+(x++)+(--x)+(x--);
//     printf("y=%d",y);
//     return 0;
// }
#include <stdio.h>

// Function to calculate average
float calculateAverage(float num1, float num2, float num3, float num4, float num5) {
    return (num1 + num2 + num3 + num4 + num5) / 5;
}

int main() {
    float num1, num2, num3, num4, num5;

    // Input numbers
    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    // Calculate and display average
    float average = calculateAverage(num1, num2, num3, num4, num5);
    printf("Average: %.2f\n", average);

    return 0;
}