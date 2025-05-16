#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int frequency[26]={0};
    int distinctCount = 0;
    printf("%d %d",frequency[10],frequency[20]);

    scanf("%s", s);


    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';  
        if (frequency[index] == 0) {
            distinctCount++;
        }
        frequency[index]++;
    }


    if (distinctCount % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}
