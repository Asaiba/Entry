#include <stdio.h>
#define PI 3.14159


struct Shape {
    float a; 
};

int main() {
    struct Shape shape;
    int choice;

    printf("Enter the size: ");
    scanf("%f", &shape.a);

    printf("Choose a shape:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        float perimeter = shape.a * 4;
        printf("The perimeter of the square is: %.2f\n", perimeter);
    } else if (choice == 2) {
        float circumference = PI * shape.a * 2;
        printf("The circumference of the circle is: %.2f\n", circumference);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
