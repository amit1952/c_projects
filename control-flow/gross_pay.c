/*
 * Creator Amitava Das Gupta
 * Date:
 */
#include <stdio.h>

int main() {
    double basic_pay_rate;
    int base_working_hours;
    int hours_worked;
    float base_pay;
    int overtime; 
    float overtime_pay;
    float total_pay,taxable;
    float tax = 0.0;
    float gross_pay;
    basic_pay_rate = 12.00;
    base_working_hours = 40;

    /* Get number of hours worked */
    printf("How many hours have you worked? ");
    scanf("%d", &hours_worked);
    overtime = hours_worked - base_working_hours;

    base_pay = basic_pay_rate * base_working_hours;
    overtime_pay = overtime * basic_pay_rate * 1.5;
    total_pay = base_pay + overtime_pay;
    taxable = total_pay;

    // Tax Calculation
    if (taxable >= 300) {
        tax = 300 * 1.5;
        taxable = taxable - 300;
    } else if (taxable >= 150) {
        tax = tax + (150 * 0.2);
        taxable = taxable - 150;
    } 

    if (taxable > 0) {
        tax = tax + (taxable * .25);
    }

    gross_pay = total_pay + tax;
    /* printf("Base working Hours = %d\n", base_working_hours); */
    /* printf("Hours worked = %d\n", hours_worked); */
    printf("Nett Pay = %.2f\n", base_pay);
    /* printf("Overtime hours = %d\n", overtime); */
    printf("Overtime Pay = %.2f\n", overtime_pay);
    printf("Tax added = %.2f\n", tax);
    printf("Gross pay earned: %.2f\n", gross_pay);

    return 0;
}

