#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void checkuser(char *user){
    
    char u[15] = "Admin";

    if (strcmp(user, u) == 0){
        printf("Hello!");
    }
    else {
        printf("Bad!");
    }
}


int main() {

    char user[40] = "Admin";

    checkuser(user);
    return 0;
}