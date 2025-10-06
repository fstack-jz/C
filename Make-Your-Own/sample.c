#include <stdio.h>


void line(){
    printf("************************\n");
}


int main(){
    
    char choice;
    int num1, num2, result;
    
    line();
    printf("Simple Calculator\n");  
    line();
    printf("Select an operator (+, -, *, /): ");
    scanf(" %c", &choice);

    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch(choice){
        case '+':
            result = num1 + num2;
            printf("\n%d + %d = %d\n", num1, num2, result);
            line();
            break;
        case '-':
            result = num1 - num2;
            printf("\n%d - %d = %d\n", num1, num2, result);
            line();
            break;
        case '*':
            result = num1 * num2;
            printf("\n%d * %d = %d\n", num1, num2, result);
            line();
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("\n%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Division by zero error!\n");
            }
            line();
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}