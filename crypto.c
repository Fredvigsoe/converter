#include <stdio.h>

//henter eksterne funktioner fra crypto_ui.c til menuen & convert_ui.c til at få indtastning- og aflæsningsfuktionerne og hovedmenuen.
extern void display_crypto_menu();
extern char get_choice();
extern float get_value();
extern void display_menu();
//-----------------------------------------

float btc_to_eth(float btc);
float btc_to_xrp(float btc);
float eth_to_xrp(float eth);


void crypto_main(){
    char choice = 'F';
    while (choice != 'x')
    {
        display_crypto_menu();
        switch (choice = get_choice()) {
            case 'a': { // hvis btc til eth
                
                //Bed om antal BTC 
                printf("Indtast BTC: ");
                float btc = get_value();

                //omregning
                float eth = btc_to_eth(btc);

                //resultat
                printf("%f BTC er %.2f ETH\n", btc, eth);
            }
            break;
            case 'b': { // hvis btc til xrp

                //Bed om antal btc
                printf("Indtast BTC: ");
                float btc = get_value();

                //omregning
                float xrp = btc_to_xrp(btc);

                //resultat
                printf("%f BTC er %.2f XRP\n", btc, xrp);
            } 
            break;
            case 'c': { // hvis eth til xrp
                
                //Bed om antal eth
                printf("Indtast ETH: ");
                float eth = get_value();

                //omregning
                float xrp = eth_to_xrp(eth);

                //resultat
                printf("%f ETH er %.2f XRP\n", eth, xrp);
            }
            break;
            case 'd': 
                return;
            
            case 'x': // Hvis x så afslut
                break;
            
            default: // Hvis man giver en mulighed der ikke findes
                printf("\nUkendt valg %c, brug 'a', 'b', 'c' eller 'x'", choice);
            
        }
    }
}



// Kurs beregner, kursen er fra d. 2/9-2024

float btc_to_eth(float btc){
    return (btc * 58000) / 2500; 
}

float btc_to_xrp(float btc){
    return (btc * 58000) / 0.55; 
}

float eth_to_xrp(float eth){
    return (eth * 2500) / 0.55;
}