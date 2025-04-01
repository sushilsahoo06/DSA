//wap to enter a character string in a array and short the character
#include<stdio.h>
#include<conio.h>

void mySort(char arr[], int n);

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    char arr[n];
    printf("Enter the characters in the array:\n");
    
    // Fix: Use i instead of n inside the loop
    for(int i = 0; i < n; i++){
        scanf(" %c", &arr[i]); // Fix: Corrected the array index and added a space before %c to consume the newline character
    }

    mySort(arr, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++){
        printf("%c ", arr[i]); // Fix: %c to print characters
    }

    getch();
    return 0;
}

void mySort(char arr[], int n){
    char temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){ // Fix: Corrected the loop condition
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}
