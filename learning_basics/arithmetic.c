#include <stdio.h>


int main() {


    float x = 15;
    float y = 61;
    float result = 0;

    result = (x * y) / (y + x) / (x * y) - (y - x);

    printf("\nThe result of %.f and %.f is: %f\n", x, y, result);
    x++;
    printf("\n%.f\n", x);

    return 0;
}