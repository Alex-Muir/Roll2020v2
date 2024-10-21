#include "config.h"

// generate a percentage roll
void rollPercentage() {
    int percentage = (rand() % 100) + 1;
	
	printf("\nPercentage: %d\n\n", percentage);
}

// get the number of D10s for a roll
void _getNumD10(int *numD10) {
	//int result;

    while(*numD10 <= 0) {

        printf("\nHow many D10 would you like to roll? ");
        while(scanf("%d", numD10) != 1) {
			printf("\nBit too much Blue Glass, choom? You're flashin' out. C'mon, enter a number.\n");

			while(getchar() != '\n')
				;
		}

        if(*numD10 == 0)
            printf("\nC'mon choom, I though we were rollin'.\n\n");
        if(*numD10 < 0) 
           printf("\nGet real! You can't roll a negative amount of dice.\n\n");
    }
}

// roll D10s
void _rollD10(int numD10) {
    
    int i;
    int tmp = 0;
    int sum = 0;
    printf("\nd10: ");
    for(i = 0; i < numD10; i++) {
        tmp = (rand() % D_10) + 1;
        printf("%d ", tmp);
        sum += tmp;
    }

    printf("   |   sum: %d\n\n", sum);
}

void rollD10() {
    int numD10 = 0;
    _getNumD10(&numD10);
    _rollD10(numD10);
}

// get the number of D6s for a roll
void _getNumD6(int *numD6) {
    while(*numD6 <= 0) {

        printf("\nHow many D6 would you like to roll? ");
        while(scanf("%d", numD6) != 1) {
			printf("\nOne can of Smash too many. Numbers only!\n");
			
			while(getchar() != '\n')
				;
		}

        if(*numD6 == 0)
            printf("\nC'mon choom, I though we were rollin'.\n\n");
        if(*numD6 < 0) 
           printf("\nGet real! You can't roll a negative amount of dice.\n\n");
    }
}

// roll D6s
void _rollD6(int numD6) {
    
    int i;
    int tmp = 0;
    int sum = 0;
    printf("\nd6: ");
    for(i = 0; i < numD6; i++) {
        tmp = (rand() % D_6) + 1;
        printf("%d ", tmp);
        sum += tmp;
    }

    printf("   |   sum: %d\n\n", sum);
}

void rollD6() {
    int numD6 = 0;
    _getNumD6(&numD6);
    _rollD6(numD6);
}

void rollCombo() {
	int numD10 = 0;
	int numD6 = 0;
	_getNumD10(&numD10);
	_getNumD6(&numD6);
	_rollD10(numD10);
	_rollD6(numD6);
}

int _greaterThanTwo() {

    //printf("In greaterThanTwo\n");

	int stat = 0;

	do {
		stat = (rand() % D_10) + 1;
	} while(stat <= 2);
	
	return stat;
}