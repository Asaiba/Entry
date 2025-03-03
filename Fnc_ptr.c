#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b; // Complete the computation for addition
}

// Function to subtract two integers
int sub(int a, int b) {
    return a - b; // Complete the computation for subtraction
}

// Function to multiply two integers
int mult(int a, int b) {
    return a * b; // Complete the computation for multiplication
}

int main() {
    // Array of function pointers
    int (*ptr[3])(int, int) = {add, sub, mult};

    int a = 40, b = 10;
    int i;

    // Example: Change the value of i to test different operations
    for (i = 0; i < 3; i++) {
        int result = ptr[i](a, b); // Call the function pointed to by ptr[i]
        switch (i) {
            case 0:
                printf("Addition: %d + %d = %d\n", a, b, result);
                break;
            case 1:
                printf("Subtraction: %d - %d = %d\n", a, b, result);
                break;
            case 2:
                printf("Multiplication: %d * %d = %d\n", a, b, result);
                break;
        }
    }

    return 0;
}
