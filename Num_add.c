#include <stdio.h>

int sod(int n) {
    if (n == 1) 
        return 1;
    return n + sod(n - 1);
}

int main() {
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    printf("Sum of first %d numbers = %d\n", a, sod(a));
    return 0;
}
