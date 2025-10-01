// functions

#include <stdio.h>
#include <math.h> // always include header like stdio.h






// function declarations 

// void function doesnt return any value, but the code inside can be executed and produce an output
void greet(){ 
    printf("Hello, World!\n");  //prints hello world
}

// function that returns an integer value
int addition(int a, int b) { // function definition with parameters

    return a + b; // returns the sum of two numbers
}






// used char pointer to return the string as name variable
char* get_name() {
    static char name[50]; // static to persist after function returns
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    return name; // returns the name entered by user
}

//  this can be also done by int, float, double, char, etc depending on the return type of the function

int get_number() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return number; // returns the value of the number
}

int main() {
    greet(); // function call
    int add = addition(5, 10); // function call with arguments
    printf("The sum is: %d\n", add); // prints the sum
    char* name = get_name(); // function call to get name
    printf("Hello, %s", name); // prints the name
    int number = get_number(); // function call to get number
    printf("The number is: %d\n", number); // prints the number
    return 0;
}