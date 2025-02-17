#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ages;
    int i;
    
    ages = (int *)calloc(5, sizeof(int));

    if (ages == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the ages of 5 people:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ages[i]);
    }

    printf("\nAges entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ages[i]);
    }

    free(ages);
    
    return 0;
}
