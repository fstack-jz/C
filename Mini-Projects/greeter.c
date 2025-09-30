#include <stdio.h>
#include <string.h>


int main() {

    char name[50];
    char occupation[50];
    char country[50];
    char course[50];
    char institution[50];

    int age;
    int year;



    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Enter your country: ");
    fgets(country, sizeof(country), stdin);
    country[strlen(country) - 1] = '\0';

    printf("Enter your occupation: ");
    fgets(occupation, sizeof(occupation), stdin);
    occupation[strlen(occupation) - 1] = '\0';

    printf("Enter your course: ");
    fgets(course, sizeof(course), stdin);
    course[strlen(course) - 1] = '\0';

    printf("Enter your year level: ");
    scanf("%d", &year);
    getchar();

    printf("Enter your institution: ");
    fgets(institution, sizeof(institution), stdin);
    institution[strlen(institution) - 1] = '\0';

    printf("\nHello %s!, a %d-year-old %s and a %dst year in %s at %s, living in %s.\n", name, age, occupation, year, course, institution, country);


    return 0;
}