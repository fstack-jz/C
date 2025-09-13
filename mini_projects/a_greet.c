#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    char name[40] = "";
    char occupation[75] = "";
    char instituion[100] = "";
    char buffer[10];
    int age = 0;

    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("What is your age?:  ");
    fgets(buffer, sizeof(buffer), stdin);
    age = atoi(buffer);

    printf("You are currently? (Occupation): ");
    fgets(occupation, sizeof(occupation), stdin);
    occupation[strlen(occupation) - 1] = '\0';

    printf("And what institution?: ");
    fgets(instituion, sizeof(instituion), stdin);
    instituion[strlen(instituion) - 1] = '\0';



    printf("\nHello %s!, you are currently %d years old and a %s in %s!", name, age, occupation, instituion);





    return 0;
}