#include <stdio.h>
#include <string.h>

int main() {

    char input[30] = "";

    printf("Type Y: ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';

    if (strcmp(input, "Y") == 0) {
        printf("Hello!");
    }
    else if (strcmp(input, "N") == 0) {
        printf("Ok :(");
    }
    else {
        printf("What?");
    }

    return 0;
}