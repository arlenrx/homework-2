#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void clearScreen() {
    printf("\033[H\033[J");
}

void printSplashScreen(const char *name, const char *date) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 60; j++) {
            if (j == 0 || j == 59) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                                        [Magrathea ver 0.1]                               \n");
    printf("                   Magrathea, where a shining planet is created in a wasteland with no grass,         \n");
    printf("           a place where unseen potential is discovered and gems are polished by the hands of experts,    \n");
    printf("                                        Welcome to Magrathea.   \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[User]: %s                                   [Execution Time]: %s\n", name, date);
    printf("=============================================================================================================\n");

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 60; j++) {
            if (j == 0 || j == 59) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int main() {
    char name[100], date[11];

    printf("[Please enter the current date in the \"yyyy-mm-dd\" format]: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    printf("[Please enter your name]: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("**The input has been processed successfully.**\n");

    sleep(3);
    clearScreen();

    printSplashScreen(name, date);

    return 0;
}
