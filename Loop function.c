#include <stdio.h>

void mult(int x){
    for (int i= 0; i<=12; i++){
    printf("\n %d * %d = %d", x, i, x*i);
    }
}

int main(){
    int c;
    printf("Enter a number: ");
    scanf(" %d", &c);
    printf("\nThe mult table of %d is:\n ",c);
    mult(c);
 
 return 0;
}
