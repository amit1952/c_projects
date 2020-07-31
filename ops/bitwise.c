/*
 * Creator Amitava Das Gupta
 * Date:
 */
#include <stdio.h>

int main() {
    unsigned int a = 60;  // 0011 1100
    unsigned int b = 13;  // 0000 1101
    int result = 0;

    // Tests
    // AND
    result = a & b;  // 0000 1100
    printf("Result of the AND operation on %d and %d is %d\n", a, b, result);

    // OR
    result = a | b;  // 0011 1101 = 61
    printf("Result of the OR operation on %d and %d is %d\n", a, b, result);

    // Shift Left
    result = a << 2;  // 1111 0000 = 240
    printf("Result of the Shift left by 2 of %d is %d\n", a, result);
    return 0;
}

