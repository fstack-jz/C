#include <stdio.h>
#include <string.h>

void getname(char *first, char *last, char *middle) {
    printf("What is your first name?: ");
    fgets(first, 50, stdin);
    first[strcspn(first, "\n")] = '\0'; // remove newline

    printf("What is your last name?: ");
    fgets(last, 50, stdin);
    last[strcspn(last, "\n")] = '\0';

    printf("What is your middle initial?: ");
    fgets(middle, 10, stdin);
    middle[strcspn(middle, "\n")] = '\0';
}

int main() {
    char first[50], last[50], middle[10];

    getname(first, last, middle);

    printf("Hello, %s %s %s\n", first, middle, last);
    return 0;
}
