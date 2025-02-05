#include <stdio.h>

void main() {
    int age[] = {4, 5, 6, 2, 6};
    int *ptr = age;  // Pointer to the first element of the array

    for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++) {
        printf("%d ", *(ptr + i));  // Access array elements using pointer arithmetic
    }
    printf("\n");
}
