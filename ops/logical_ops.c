/*
 * Creator: Amitava Das Gupta
 * Date: 20/07/2010
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("OR (||) Operations.\n");

    _Bool a = true;
    _Bool b = false;
    _Bool result;

    result = a || b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a || b = %d\n", result);
    
    a = true;
    b = true;

    result = a || b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a || b = %d\n", result);

    a = false;
    b = false;

    result = a || b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a || b = %d\n", result);

    a = false;
    b = true;

    result = a || b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a || b = %d\n", result);

    printf("\nAND (&&) Operations.\n");
    a = true;
    b = true;

    result = a && b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a && b = %d\n", result);

    a = true;
    b = false;

    result = a && b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a && b = %d\n", result);

    a = false;
    b = false;

    result = a && b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a && b = %d\n", result);

    a = false;
    b = true;

    result = a && b;

    printf("a = %d, b = %d\n", a, b);
    printf("The result of a && b = %d\n", result);

    return 0;
}

