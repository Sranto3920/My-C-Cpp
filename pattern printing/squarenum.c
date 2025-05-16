#include <stdio.h>

int main() {
    int n, i, j, value, distance;

    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    int size = 2 * n - 1; 

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {

            int top = i;                  
            int bottom = size -1- i;   
            int left = j;                
            int right = size - 1 - j;    


            distance = top;
            if (bottom < distance) distance = bottom;
            if (left < distance) distance = left;
            if (right < distance) distance = right;


            value = n - distance;

            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}