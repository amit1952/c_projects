/* Testing operators */
// Prefix and postfix operators.
#include <stdio.h>

int main() {
    printf("\nUNARY OPERATORS - POSITIVE\n");
    int a = 33;
    printf("The Postfix Operator\na = %d\n", a);
    printf("The result of a++ = %d\n", a++);

    a = 33;
    printf("\nThe Prefix Operator\na = %d\n", a);
    printf("The result of ++a = %d\n", ++a);
    
    printf("\nUNARY OPERATORS - NEGATIVE\n");
    a = 33;
    printf("The Postfix Operator\na = %d\n", a);
    printf("The result of a-- = %d\n", a--);

    a = 33;
    printf("\nThe Prefix Operator\na = %d\n", a);
    printf("The result of --a = %d\n", --a);
    return 0;
    
}

