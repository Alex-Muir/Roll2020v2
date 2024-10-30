#include "config.h"

// print the instructions for the application
void printInstructions() {
    printf("\nRoll2020v2 is an application that can help you with some Cyberpunk2020\n");
    printf("related tasks. Make a selection from the menu by picking a valid number.\n");
    printf("After the selection has been made the program will output the result(s).\n\n");
    printf("VALID SELECTIONS:\n\n");
    printf("  1 - Print instructions. This prints the instructions for the program.\n\n");
    printf("  2 - Roll a percentage. This returns a number between 1 and 100.\n\n");
    printf("  3 - Roll some D10s. This will roll one or many D10s. The amount\n");
    printf("      is chosen by the user. It will also return the sum of the roll\n\n");
    printf("  4 - Roll some D6s. This will roll one or many D6s. The amount is\n");
    printf("      chosen by the user. It will also return the sum of the roll.\n\n");
    printf("  5 - Roll a combination of D10s and D6s. This will roll  one or many\n");
    printf("      D10s and D6s. The amounts are chosen by the user. It will also \n");
    printf("      return the respective sums of the rolls.\n\n");
    printf("  6 - Generate character stats and equipment. This will generate\n");
    printf("      character stats based on the \"fast\" method, ensuring no\n");
    printf("      stat is less than 3. I also generates weapons, armor, and\n");
    printf("      cyberware\n\n");
    printf("  7 - Determine damage points after healing. This will determine\n");
    printf("      a characters remaining damage since the last session. It is\n");
    printf("      based on days since damage taken, rate of healing, and successful\n");
    printf("      death saves and/or medical skill checks.\n\n");
    printf("  0 - Exit. This exits the program.\n\n");
}

// display the choice menu
void displayMenu() {
    
    printf("  (1) - Print instructions.\n");
    printf("  (2) - Roll a percentage.\n");
    printf("  (3) - Roll some D10s.\n");
    printf("  (4) - Roll some D6s.\n");
    printf("  (5) - Roll a combination of D6s and D10s\n");
    printf("  (6) - Generate character stats and equipment.\n");
    printf("  (7) - Determine damage points after healing.\n");
    printf("  (8) - Generate character life path.\n");
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



