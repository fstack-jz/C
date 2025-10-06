#include <stdio.h>

int main(){
    
    // initialize count variable
    int count = 1;
    
    // while loop syntax: while (condition)
    while(count <= 10){ // the loop continues as long as the count is less than 10
        printf("This is No. %d\n", count); // prints the output
        count++; // increment the count to avoid infinite loop
    }

    printf("\n");
    printf("Another example of while loop:\n");

    while(1){ // infinite loop until the break condition is met
        int number;
        // prompt user for input
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number); // read and assigns the input to number variable

        if(number == 0){ // check if the input is 0 to exit the loop
            printf("Exiting the loop.\n");
            break; // exit the loop if number is 0
        } else { // otherwise, print the entered number
            printf("You entered: %d\n", number);
        }
    }

    return 0;
}



// Key Takeaways:
// 1. while loop continues to execute as long as the condition is true.
// 2. it can only be stopped if the condition becomes false or there is a break statement within the code.
// 3. be cautious of infinite loops, ensure there is a way to exit the loop to avoid overloading the system (future topic). 