/* Testing operators */
// Modulus
#include <stdio.h>

int main() {
    int a = 33;
    int b = 15;
    int result = 0;

    result = a % b;
    
    /* printf("a = %d, b = %d\n", a, b); */
    printf("The modulus of %d and %d is %d\n", a, b, result);

    return 0;
}

