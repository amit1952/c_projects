/* Program to calculate the perimeter and
 * area of a rectangle. Width and height are
 * supplied
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Declare and Initialize variables
    double height, width, area, perimeter;
    height = atof(argv[1]);
    width = atof(argv[2]);
    area = 0.0;
    perimeter = 0.0;

    // Calculate values
    perimeter = (height+width) * 2;
    area = width * height;

    // Print results
    printf("The height of the rectangle is %.2f\nThe width of the rectangle is %.2f\n", height, width);
    printf("The perimeter of the rectangle is: %f\n", perimeter);
    printf("The area of the rectangle is: %f\n", area);

    return 0;
}

