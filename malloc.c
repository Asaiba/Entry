#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ages;
    int i;

    // Allocating memory for 5 integers using malloc()
    ages = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (ages == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input ages
    printf("Enter the ages of 5 people:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ages[i]);
    }

    // Display ages
    printf("\nAges entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ages[i]);
    }

    // Free the allocated memory
    free(ages);
    
    return 0;
}
