// include standard header file
#include <stdio.h>

// initiate main function
int main() {
    // declare a variable
    int x = 5;
    // for loop syntax: for (initialization; the condition; increment/decrement)
    for (x; x <= 100; x += 5) {
        if (x != 100){ // prints a an output for each iteration using if-else if-else
            printf("This is No. %d\n", x);
        } else if(x == 50){ // prints a special char if the iteration reached 50
            printf("You are halfway there at %d!\n", x);
        } else {// prints a different output when the loop reaches 100
            printf("And the last number: %d\n", x);
        }
    }

    printf("\n");
    printf("Another example of for loop:\n");


    // Another example
    int i = 10;

    for (i; i>=1; i--) { // decrementing loopcp
        printf("Countdown: %d\n", i);
    }

    return 0;
}