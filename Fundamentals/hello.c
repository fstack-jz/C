#include <stdio.h> // Standard header for input and output functions

// Main functions - execution starts here
int main() {
    printf("Hello, World!\n"); // Print Hello, World! to the console and must end with a semicolon
    return 0; // Return 0 to indicate that the program ended successfully
}




// You may ask: Why include <stdio.h>?

// The <stdio.h> header file is included because it contains the declaration for the printf function used in the program. Without including this header, 
// the compiler would not recognize printf which is the output function, leading to a compilation error.



// You may also ask: Why does the program return 0?

// The return 0 statement indicates that the program has executed successfully. In C, the main function returns an integer value to the operating system upon completion. 
// A return value of 0 typically signifies that the program has run without errors. Non-zero returns however, can indicate that an error occurred during execution.