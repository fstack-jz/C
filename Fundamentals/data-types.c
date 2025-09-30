#include <stdio.h>


int main() {
    // Integer types
    int a = 10;
    long b = 100000L;
    short c = 5;

    // Floating-point types
    float d = 5.5f;
    double e = 10.99;

    // Character type
    char f = 'A';

    // Boolean type (C99 and later)
    _Bool g = 1; // true

    // Print the values
    printf("Integer: %d\n", a);
    printf("Long: %ld\n", b);
    printf("Short: %d\n", c);
    printf("Float: %.2f\n", d);
    printf("Double: %.2f\n", e);
    printf("Character: %c\n", f);
    printf("Boolean: %d\n", g);

    return 0;
}