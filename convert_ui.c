#include <stdio.h>

void display_menu() {
    printf("\nVelkommen til converter appen, hvor du kan konvertere crypto, valuta og ædelmetaller\n");
    printf("Vælg hvilken konvertering du vil lave:\n");
    printf("1. Cryptovaluta\n");
    printf("2. Valuta\n");
    printf("3. Ædelmetaller\n");
    printf("4. Afslut\n");
    printf("Indtast dit valg ved hjælp af tallene 1 til 4\n");
}

char get_choice(){
    char choice;
    scanf(" %c", &choice);
    return choice;
}

float get_value(){
    float value;
    scanf("%f", &value);
    return value;
}