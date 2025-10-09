#include <stdio.h>
#include <string.h>


int main(){

    double start = 5.14;
    double target = 50.00;
    float stop = 100.00;

    char choice;
    int askOnce = 0;

    while (start <= stop){
        start += 1.66;
        printf("Data: %.2f\n", start);
        if (!askOnce && start >= target) {
            askOnce = 1;
            printf("You have reached your target: %.2f", target);

            printf("\nDo you wanna continue [Y/N]: ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y'){
                printf("continuing...\n");
                continue;
            } else {
                printf("Exiting....");
                break;
            }
            break;
        } 
    }
    return 0;
}