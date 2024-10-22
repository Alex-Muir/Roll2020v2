#include "config.h"
#include "dice.h"
#include "character.h"

void displayMenu(); 
void getSelection(char*);

int main() {

    char selection = '0';
    srand(time(NULL));

    printf("\n'Sup, choom! Welcome to Night City!\n\n");

    do {
        displayMenu();
        getSelection(&selection);

        switch (selection) {
            case '0':
                printf("\nLater, choom.\n\n");
                break;
            case '1':
                rollPercentage();
                break;
            case '2':
                rollD10();
                break;
            case '3':
                rollD6();
                break;
            case '4': 
                rollCombo();
                break;
            case '5':
                generateCharacter();
                break;
            default:
                printf("\nChoom, c'mon... Enter a valid selection.\n\n");
                break;
        }
    } while(selection != '0');
    
    return 0;
}

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



