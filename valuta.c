#include <stdio.h>

//henter eksterne funktioner fra valuta_ui.c til menuen & convert_ui.c til at få indtastning- og aflæsningsfuktionerne og hovedmenuen.
extern void display_valuta_menu();
extern char get_choice();
extern float get_value();
extern void display_menu();
//-----------------------------------------

float dkk_to_eur(float dkk);
float dkk_to_usd(float dkk);
float dkk_to_gbp(float dkk);


void valuta_main(){
    char choice = 'F';
    while (choice != 'x')
    {
        display_valuta_menu();
        switch (choice = get_choice()) {
            case 'a': { // hvis dkk til eur
                
                //Bed om antal dkk 
                printf("Indtast dkk: ");
                float dkk = get_value();

                //omregning
                float eur = dkk_to_eur(dkk);

                //resultat
                printf("%f DKK er %.2f EUR\n", dkk, eur);
            }
            break;
            case 'b': { // hvis dkk til usd

                //Bed om antal dkk
                printf("Indtast DKK: ");
                float dkk = get_value();

                //omregning
                float usd = dkk_to_usd(dkk);

                //resultat
                printf("%f DKK er %.2f USD\n", dkk, usd);
            } 
            break;
            case 'c': { // hvis DKK til GBP
                
                //Bed om antal DKK
                printf("Indtast DKK: ");
                float dkk = get_value();

                //omregning
                float gbp = dkk_to_gbp(dkk);

                //resultat
                printf("%f DKK er %.2f GBP\n", dkk, gbp);
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


// Kurs beregner, kursen er fra d. 2/9-2024

float dkk_to_eur(float dkk){
    return dkk * 0.13407; 
}

float dkk_to_usd(float dkk){
    return dkk * 0.14821; 
}

float dkk_to_gbp(float dkk){
    return dkk * 0.11283; 
}