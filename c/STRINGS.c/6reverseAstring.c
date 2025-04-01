#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Assuming a maximum string length of 100 characters

    printf("Enter a string: ");
   // scanf("%s", str);
    gets(str);

    int length = strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
