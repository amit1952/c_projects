/* Testing operators */
#include <stdio.h>

int main() {
    float a = 9.0;
    int b = 15;
    float result = 0.0;

    result = b / a;
    
    printf("b = %d, a = %f\n", b, a);
    printf("%d / %f = %f\n", b, a, result);

    return 0;
}

