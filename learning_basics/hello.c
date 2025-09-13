#include <stdio.h>
#include <stdbool.h>

int main() {

    int set_num = 5;
    char grade = 'A';
    char name[] = "John";
    bool isItem = true;
    float itemPrice = 13.99;
    char sign = '$';

    printf("\nHello %s, new number is: %i\n", name, grade);
    printf("Your grade is Math is: %c\n", grade);

    if(isItem){
        printf("Your item exists, the price of the item is: %c%.2f\n", sign, itemPrice);
    } 
    else{
        printf("Your item doesnt exists :(");
    }


    return 0;
}