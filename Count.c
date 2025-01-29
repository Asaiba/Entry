#include <stdio.h>

int main() {
    int num, cout = 0, temp;
    
    printf("Enter a number with more than 1 digit: ");
    scanf("%d", &num);
    
    if (num < 10 || num > 9999999) {
        printf("Invalid input! Please enter a number with more than 1 digit.\n");
        return 1;
    }
    
    temp = num;
    while (temp != 0) {
        temp /= 10;
        cout++;
    }
    
    printf("Your number has %d digits.\n", num, cout);
    
    if (cout % 2 == 0) {
        printf("The number of digits is even.\n");
    } else {
        printf("The number of digits is odd.\n");
    }
    
    return 0;
}
