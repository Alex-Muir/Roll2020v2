#include "config.h"

// display the choice menu
void displayMenu() {

    printf("  (1) - Roll a percentage.\n");
    printf("  (2) - Roll some D10s.\n");
    printf("  (3) - Roll some D6s.\n");
    printf("  (4) - Roll a combination of D6s and D10s\n");
    printf("  (5) - Generate a character and equipment.\n");
    printf("  (6) - Determine damage points after healing.\n");
    printf("  (0) - Exit\n\n");
    printf("So, what do you wanna do? ");
}

// get the selection of the user
void getSelection(char* selection) {

    scanf(" %c", selection); 
}

void invalidSelection(int* invalid) {

    (*invalid)++;

    if(*invalid > 4) {
        printf("\nWhat a waste of time. Come back when you're serious.\n\n");
        exit(EXIT_FAILURE);

    } else if(*invalid > 2) {
        printf("\nStop messin' around. Is this a joke to you?\n\n");
    } else {
        printf("\nChoom, c'mon... Enter a valid selection.\n\n");
    }
    
}



