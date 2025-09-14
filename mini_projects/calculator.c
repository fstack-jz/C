#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

    float num1 = 0.0f;
    float num2 = 0.0f;
    float result = 0.0f;
    char input[30] = "";

    printf("Welcome to Calculator!!\n");
    
    printf("Choose operators:\n1) Add\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit.\n\n: ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';

    if (strcmp(input, "1") == 0) {

        printf("Please enter your first number: ");
        scanf(" %f", &num1);

        printf("Please enter your second number: ");
        scanf(" %f", &num2);

        result = num1 + num2;

        printf("The result of %.f and %.f is: %.2f", num1, num2, result);
    }
    else if (strcmp(input, "2") == 0){
        
        printf("Enter first number: ");
        scanf(" %f", &num1);

        printf("Enter second number: ");
        scanf(" %f", &num2);

        result = num1 + num2;

        printf("The result of %.f and %.f is: %.2f", num1, num2, result);
    }
    else {
        printf("Error: Please input valid number!");
    }

    return 0;
}