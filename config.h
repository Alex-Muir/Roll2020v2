#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>      // printf, fprintf, stderr, scanf, getchar
#include <stdlib.h>     // srand, rand, exit
#include <time.h>       // time
#include <stdbool.h>    // bool, true, false
#include <string.h>     // strcmp

#define     D_10    		10      // number of sides on a D10
#define     D_6     		6       // number of sides on a D6
#define		NUM_ROLES		9		// number of character roles in the game
#define		NUM_STATS		9		// number of base stats
#define		RUN				3		// MA multiple to determine run distance
#define		LEAP			4		// MA multiple to determine leap distance
#define		LIFT			40		// BODY multiple to determine Lift max in kg
#define		CARRY			10		// BODY multiple to determine Carry max in kg
#define		HUMANITY 		10		// EMP multiple to determine Humanity
#define		SOLO_ROLLS		6		// Number of rolls for a solo character for equipment
#define		OTHER_ROLLS		3		// Number of rolls for other characters for equipment
#define		CYBER_OFFSET	3		// Offset for cyberware check during equipment generation
#define     STYLE_OPTIONS   3       // Number of style artifacts

#endif
