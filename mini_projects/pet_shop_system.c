#include <stdio.h>
#include <string.h>
// longest string => German Sheppered or Swiss Sheppered

int main() {

    char item[80] = "";
    float price = 0.0f;
    int animalcount = 0;
    char currency = '$';
    float result = 0.0f;


    printf("What kinda of dog breed, would u like to purchase?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How many?: ");
    scanf("%d", &animalcount);

    printf("Choose a price: ");
    scanf("%f", &price);

    result = price * animalcount;


    printf("\nYou bought %d %s!\n", animalcount, item);
    printf("The total price is: %c%.2f", currency, result);



    return 0;
}