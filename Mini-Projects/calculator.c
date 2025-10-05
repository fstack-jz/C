#include <stdio.h>
#include <string.h>


int addition(int a, int b){
    return a + b;
}

int subtraction(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a  * b;
}

int division(int a, int b){
    return a / b;
}


int main(){

    int num1;
    int num2;

    printf("Enter first number: ");
    scanf(" %d", &num1);

    printf("Enter second number: ");
    scanf(" %d", &num2);

    printf("Addition: %d\n", addition(num1, num2));
    printf("Subtraction: %d\n", subtraction(num1, num2));
    printf("Multiplication: %d\n", multiplication(num1, num2));
    printf("Division: %d\n", division(num1, num2));

    return 0;
}