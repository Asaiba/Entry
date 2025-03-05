#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

typedef double (*operation)(double, double);

double calculate(double a, double b, operation op) {
    return op(a, b);
}

int main() {
    double num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    operation op = NULL;

    switch (choice) {
        case 1:
            op = add;
            break;
        case 2:
            op = subtract;
            break;
        case 3:
            op = multiply;
            break;
        case 4:
            op = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    result = calculate(num1, num2, op);
    printf("Result: %.1f\n", result);

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) 
        return a / b;
    else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
