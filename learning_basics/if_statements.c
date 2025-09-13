#include <stdio.h>
#include <string.h>

int main() {

    char name[50] = "";
    int age = 0;


    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("What is your age?: ");
    scanf("%d", &age);


    if(age >= 65) {
        printf("%s is classified as a senior citizen!", name);
    }
    else if(age >= 18) {
        printf("%s is an Adult.", name);
    }
    else if (age == 0) {
        printf("You are a newborn!");
    }
    else {
        printf("You are underage.");
    }

    return 0;
}