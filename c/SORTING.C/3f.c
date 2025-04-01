#include <stdio.h>
#include <stdlib.h>

int main() {
    int j, *a;
    a = (int *)malloc(5 * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }
    printf("Enter 5 integers:\n");
    for (j = 0; j < 5; j++) {
        scanf("%d", (a + j));
    }
    printf("Array elements: ");
    for (j = 0; j < 5; j++) {
        printf("%d ", *(a + j));
    }
    free(a);

    return 0;  
}
