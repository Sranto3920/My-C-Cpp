#include <stdio.h>
#include <stdlib.h>  // For malloc and free
#include <string.h>  // For strlen

int main() {
    int max_length = 10000000; // Max length of the string
    char *s = (char *)malloc((max_length + 1) * sizeof(char)); // Allocate memory dynamically
    if (s == NULL) {  // Check if memory allocation failed
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf("%s", s);  // Read the string

    int r;
    scanf("%d", &r);

    int len = strlen(s);  // Calculate string length
    r = r % len;          // Reduce `r` using modulo to handle large values

    // Print the rotated string directly
    for (int i = r; i < len; i++) {
        putchar(s[i]);    // Print from `r` to the end
    }
    for (int i = 0; i < r; i++) {
        putchar(s[i]);    // Print from the beginning up to `r-1`
    }
    putchar('\n');        // Add a newline for output formatting

    free(s);  // Free the dynamically allocated memory
    return 0;
}
