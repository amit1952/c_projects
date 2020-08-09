/*
 * Creator Amitava Das Gupta
 * Date: 07/08/2020
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    /*! \enum Weekday
     *
     *  Detailed description
     */
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch (today) {
        case Sunday/* variable case */:
            printf("Today is Sunday.");
            break;
        case Monday:
            printf("Today is Monday");
            break;
        case Tuesday:
            printf("Today is Tuesday.");
            break;
        case Wednesday:
            printf("Today is Wednesday.");
            break;
        case Thursday:
            printf("Today is Thursday.");
            break;
        default:
            printf("whatever");
            break;
    }
    return 0;
}

