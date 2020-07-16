/* Define an enum variable Company.
 * Assign values to it.
 * Create three variables of that type.
 * Print the values of the variables.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Declare the enum.
    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

    // Create variables
    enum Company xerox, google, ebay;

    // Assign values to the variables.
    xerox = XEROX;
    google = GOOGLE;
    ebay = EBAY;

    // Print the variables
    printf("\nCOMPANY INDEXES\n");
    printf("===============\n");
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is:%d\n", google);
    printf("The value of ebay is %d\n", ebay);

    return 0;
}

