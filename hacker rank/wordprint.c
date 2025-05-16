#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    scanf("%[^\n]s", s);
    
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ') {
            printf("%c", s[i]);
        } else {
            printf("\n");
        }
    }
    printf("\n");  // For the last word
    
    return 0;
}