#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>


int main() {

    char name[30] = "";
    int x = 0;
    int y = 0;
    int result = 0;


    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    printf("Hello %s, welcome to calculator!", name);
    sleep(5);
    
    printf("\n\nEnter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);


    printf("Calculating results....");
    sleep(3.5);

    result = x + y;

    printf("\nThe result of %d and %d is: %d", x, y, result);


    return 0;
}