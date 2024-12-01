#include "config.h"
#include "dice.h"
#include "lifepath.h"
#include "character.h"
#include "menu.h"

int main() {
    
    int invalid = 0;
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
                printInstructions();
                break;
            case '2':
                rollPercentage();
                break;
            case '3':
                rollD10();
                break;
            case '4': 
                rollD6();
                break;
            case '5':
                rollCombo();
                break;
            case '6': 
                generateCharacter();
                break;
            case '7':
                printf("Coming soon: Determine damage points after healing.\n\n");
                break;
            case '8':
                printf("Coming soon: Generate character life path.\n\n");
                generateLifePath();
                break;
            default:
                invalidSelection(&invalid);
                break;
        }
    } while(selection != '0');
    
    return 0;
}
