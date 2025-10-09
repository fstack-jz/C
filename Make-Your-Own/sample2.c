#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>



int main() {


    double start;
    double increment;
    double target;
    double stop;

    int flag = 0;

    printf("=========================\n");
    printf("Enter starting number: ");
    scanf("%lf", &start);

    printf("Enter your target number: ");
    scanf("%lf", &target);

    printf("Enter your target number: ");
    scanf("%lf", &stop);

    printf("Enter your increment by: ");
    scanf("%lf", &increment);


    printf("Calculating.... Please wait.....");

    while(start >= stop) {
        start += increment;
        if(start == stop) {
            start = 
            printf("You have reached your goal");
        }
    }





    Sleep(3000);
    print("Here is the result: %\n");

    

    return 0;
}