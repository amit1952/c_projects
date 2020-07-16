/* Define an enum variable Company.
 * Assign values to it.
 * Create three variables of that type.
 * Print the values of the variables.
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    // Declare the enum.
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    // Create variables
    enum Company company1, company2, company3;

    // Assign values to the variables.
    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;

    // Print the variables
    printf("\nCOMPANY INDEXES\n");
    printf("===============\n");
    printf("Company 1 is numbered: %d\n", company1);
    printf("Company 2 is numbered: %d\n", company2);
    printf("Company 3 is numbered: %d\n", company3);

    return 0;
}

