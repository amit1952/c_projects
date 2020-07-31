/*
 * Creator Amitava Das Gupta
 * Date: 25/07/2020
 * Find the number of days and years from the number of minutes as entered by the user.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Set up variables
    float minutes_entered = 0;
    double minutes_in_year = 0;
    double Years = 0.0;
    double Days = 0.0;

    // Get input from user.
    printf("Enter the number of minutes for calculation: ");
    scanf("%f", &minutes_entered);

    // Calculate results.
    minutes_in_year = (60 * 24 * 365);
    Years = (minutes_entered / minutes_in_year);
    Days = ((minutes_entered / 60.0) / 24.0);

    // Print results
    printf("%f minutes is approximately %f years and %f days.\n", minutes_entered, Years, Days);

    return 0;
}

