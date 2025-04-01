#include <stdio.h>

void copyArrayAsc(int arr[], int n);

int main() {
    int n;    // Get the n of the array from the user
    printf("Enter the n of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }// Copy the contents of the arr array into the brr array in ascending order
    copyArrayAsc(arr, n); // Display the contents of the brr array
    printf("The elements of the array in ascending order are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void copyArrayAsc(int arr[], int n) {// Copy the contents of the arr array into the arr array
    
    for (int i = 0; i < n - 1; i++) {    // Sort the arr array in ascending order
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {// Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
