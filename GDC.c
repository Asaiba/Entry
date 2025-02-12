#include <stdio.h>

int fun(int a, int b) {
    
    if (b==0)
    return a;
   return fun(b, a % b);
}

int main() {
    
    int c,d;
   
    printf("Plz Enter the first number: \n");
    scanf("%d",&c);
    printf("Plz Enter the second number: \n");
    scanf("%d",&d);
    
    printf("The GCD of %d and %d is: %d ", c, d, fun(c,d));
    

    return 0;
}
