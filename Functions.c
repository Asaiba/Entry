#include <stdio.h>

int Add (int a, int b){
    return a + b;
}
int Mult (int a, int b){
    return a * b;
}

int main() {
    
    int c,d,s,p;

    printf("Enter the first number: ");
    scanf(" %d",&c);
    printf("Enter the second number: ");
    scanf(" %d",&d);
    
    s = Add(c,d);
    p = Mult(c,d);
    
    printf("The sum is: %d \n",s);
    printf("The Product is: %d \n",p);
    
    return 0;
}
