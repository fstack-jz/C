#include <stdio.h>


int main() {

    int level = 0;

    printf("What is your level?: ");
    scanf(" %d", &level);

    switch(level){
        case 1:
            printf("You are a beginner!");
            break;
        
        case 10:
            printf("You are level 10.");
            break;
        case 15:
            printf("You are level 15.");
            break;

        default:
            printf("You have no level.");
            break;
    }

    return 0;
}