/*
 * Creator Amitava Das Gupta
 * Date: 21/08/2020
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    /* Sum integers from 1 to count */
    for(unsigned int i = 1; i <= count; i++)
        sum += i;

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
    
    return 0;
}

