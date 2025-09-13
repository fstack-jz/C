#include <stdio.h>
#include <string.h>


int main() {


    char name[30] = "";
    char grade = '\0';
    int age = 0;
    float gpa = 0.0f;
    printf("What is your age?: ");
    scanf("%d", &age);

    getchar();
    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    printf("Hello %s, you are currently %d years old.", name, age);


    return 0;
}