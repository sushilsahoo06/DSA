#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = (int *)calloc(2, sizeof(int));

    if (ptr == NULL) {
        printf("Memory is not available\n");
        exit(1);
    }

    printf("Enter the first two integers: ");
    for (int i = 0; i < 2; i++) {
        scanf("%d", ptr + i);
    }

    ptr = (int *)realloc(ptr, 4 * sizeof(int));

    if (ptr == NULL) {
        printf("\nMemory is not available\n");
        exit(1);
    }

    printf("Enter two more integers: \n");
    for (int i = 2; i < 4; i++) {
        scanf("%d", ptr + i);
    }

    printf("Entered integers: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr);
    return 0;
}
