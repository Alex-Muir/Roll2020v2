#include "config.h"
#include "dice.h"
#include "familybackground.h"

void _style() {
    char *style[][3] = {
        {"Bike Leathers", "Mohawk", "Tatoos"}, {"Blue Jeans", "Long & Ratty", "Mirrorshades"},
        {"Cororate Suits", "Short & Spiked", "Ritual Scars"}, {"Jumpsuits", "Wild & All Over", "Spiked Gloves"},
        {"Miniskirts", "Bald", "Nose Rings"}, {"High Fasion", "Striped", "Earrings"},
        {"Cammos", "Tinted", "Long Fingernails"}, {"Normal Clothes", "Neat & Short", "Spike Heeled Boots"},
        {"Nude", "Short & Curly", "Weird Contact Lenses"}, {"Bag Lady Chic", "Long & Straight", "Fingerless Gloves"}
    };
    
    int tmpD10 = rand() % D_10;

    printf("Clothes: %s\n", style[tmpD10][0]);
    printf("Hairstyle: %s\n", style[tmpD10][1]);
    printf("Affectations: %s\n\n", style[tmpD10][2]);

}

void generateLifePath() {
    _style();

}