/*
 * Creator Amitava Das Gupta
 * Date: 
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\nSizes of Data Types");
    printf("\n------------------\n");
    printf("Size of char: %zd bytes\n", sizeof(char));
    printf("Size of short: %zd bytes\n", sizeof(short));
    printf("Size of int: %zd bytes\n", sizeof(int));
    printf("Size of long: %zd bytes\n", sizeof(long));
    printf("Size of long long: %zd bytes\n", sizeof(long long));
    printf("Size of float: %zd bytes\n", sizeof(float));
    printf("Size of double: %zd bytes\n", sizeof(double));
    printf("Size of long double: %zd bytes\n\n", sizeof(long double));
    return 0;
}

