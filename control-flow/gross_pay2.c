/*
 * Creator Amitava Das Gupta
 * Date: 19/04/2020
 */
#include <stdio.h>

#define PAYRATE 12.0
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main() {
    // declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    // Get input
    printf("Please enter the number of hours worked: ");
    scanf("%d", &hours);

    // Calculate the gross pay
    if (hours <= 40) {
        grossPay = hours * PAYRATE;
    } else {
        grossPay = 40 * PAYRATE;
        double overtimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overtimePay;
    }
    /* TEST */
    printf("Hours = %d\n", hours);
    printf("Pay Rate = %f\n", PAYRATE);
    printf("Gross Pay = %.2f\n", grossPay);

    // Calculate the tax
    if (grossPay <= 300) {
        taxes = grossPay * TAXRATE_300;
    } 
    else if (grossPay > 300 && grossPay <= 450) {
            taxes = 300 * TAXRATE_300;
            taxes += (grossPay - 300) * TAXRATE_150;
        }
    else if (grossPay > 450) {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    /* Calculate the net pay */
    netPay = grossPay - taxes;
    
    // display results
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}

