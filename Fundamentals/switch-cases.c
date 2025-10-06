#include <stdio.h>


int main() {

    //define variable for input
    char input;


    // doesnt need that much of an explanation, since this just a standard input getter in c
    printf("Press T for True and F for False, or (q) to exit: ");
    scanf(" %c", &input);

    // switch is like an if-else but only works in a constant/singular character, it works in string but not advisable.
    switch(input){ // gets the input 
        case 't': // the condition
            printf("You typed 'True'\n"); //prints out if the condition is true
            break; // use break to avoid going over the other cases
        case 'f': // other condition
            printf("You typed 'False'\n"); // prints different output since you typed another input
            break; // again, required.
        case 'q': // q to quit condition
            printf("Exiting..."); // prints out a message to let the user know that its exiting the program
            break; // exits the program
        default: // returns the output if the input is not met in the cases.
            printf("Invalid output, try again."); // output
    }
}