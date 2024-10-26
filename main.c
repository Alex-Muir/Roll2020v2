#include "config.h"
#include "dice.h"
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
                invalidSelection(&invalid);
                break;
        }
    } while(selection != '0');
    
    return 0;
}