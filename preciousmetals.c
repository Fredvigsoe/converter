#include <stdio.h>

//henter eksterne funktioner fra preciousmetals_ui.c til menuen & convert_ui.c til at få indtastning- og aflæsningsfuktionerne og hovedmenuen.
extern void display_preciousmetals_menu();
extern char get_choice();
extern float get_value();
extern void display_menu();
//-----------------------------------------

// Definerer guld, sølv og platinium priser per gram til konverteringsfuktionerne i bunden. kursen er fra d. 2/9-2024
#define GOLD_PRICE_PER_GRAM 542.05
#define SILVER_PRICE_PER_GRAM 6.18635
#define PLATINUM_PRICE_PER_GRAM 226.81

float gold_to_silver(float gold_grams);
float gold_to_platinum(float gold_grams);
float platinum_to_silver(float platinum_grams);


void preciousmetals_main(){
    char choice = 'F';
    while (choice != 'x')
    {
        display_preciousmetals_menu();
        switch (choice = get_choice()) {
            case 'a': { // hvis guld til sølv
                
                //Bed om antal gram guld 
                printf("Indtast gram af guld: ");
                float gold_grams = get_value();

                //omregning
                float silver_grams = gold_to_silver(gold_grams);

                //resultat
                printf("%f gram af guld er værd:  %.2f gram sølv\n", gold_grams, silver_grams);
            }
            break;
            case 'b': { // hvis guld til platinium

                //Bed om antal gram af guld
                printf("Indtast gram af guld: ");
                float gold_grams = get_value();

                //omregning
                float platinum_grams = gold_to_platinum(gold_grams);

                //resultat
                printf("%f gram af guld er værd:  %.2f gram platinium\n", gold_grams, platinum_grams);
            } 
            break;
            case 'c': { // hvis platinium til sølv
                
                //Bed om antal gram platinium
                printf("Indtast gram af platinium: ");
                float platinum_grams = get_value();

                //omregning
                float silver_grams = platinum_to_silver(platinum_grams);

                //resultat
                printf("%f gram af platinium er værd:  %.2f gram sølv\n", platinum_grams, silver_grams);
            }
            break;
            case 'd': 
                return;
            
            case 'x': // hvis x så afslut
                break;
            
            default:
                printf("Ukendt valg %c, brug 'a', 'b', 'c' eller 'x'", choice);
            
        }
    }
}



float gold_to_silver(float gold_grams){
    return (gold_grams * GOLD_PRICE_PER_GRAM) / SILVER_PRICE_PER_GRAM;
}

float gold_to_platinum(float gold_grams){
    return (gold_grams * GOLD_PRICE_PER_GRAM) / PLATINUM_PRICE_PER_GRAM;
}

float platinum_to_silver(float platinum_grams){
    return (platinum_grams * PLATINUM_PRICE_PER_GRAM) / SILVER_PRICE_PER_GRAM;
}