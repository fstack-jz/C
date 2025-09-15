#include <stdio.h>
#include <string.h>
#include <math.h>

void getNumbers(float *a, float*b) {
    printf("Enter first number: ");
    scanf("%f", a);
    printf("Enter second number: ");
    scanf("%f", b);
}


int main() {

    float num1 = 0.0f;
    float num2 = 0.0f;
    float result = 0.0f;
    int input = 0;

    printf("Welcome to Calculator!!\n");
    
    printf("Choose operators:\n1) Add\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit.\n\n: ");
    scanf(" %d", &input);

    switch(input){
        case 1:
            getNumbers(&num1, &num2);
            result = num1 + num2;
            printf("\nThe result of %.f and %.f is : %.2f.\n", num1, num2, result);
            break;
        
        case 2:
            getNumbers(&num1, &num2);
            result = num1 + num2;
            printf("\nThe difference of %.f and %.f is: %.2f.\n", num1, num2, result);
            break;

        case 3:
            getNumbers(&num1, &num2);
            result = num1 * num2;
            printf("\nThe product of %.f and %.f is: %.2f.\n", num1, num2, result);
            break;

        case 4:
            getNumbers(&num1, &num2);
            result = num1 / num2;
            printf("\nThe qoutient of %.f and %.f is: %.2f.\n", num1, num2, result);
            break;
        
        case 5:
            printf("Goodbye :(.");
            break;

        default:
            printf("Please only select between 1-5!");
            break;

            
    }


    return 0;
}