#include <stdio.h>

//Indhenter menuen fra convert_ui.c, og alle 3 konverteringsfunktioner fra hhv. crypto.c, valuta.c og preciousmetals.c
extern void display_menu();
extern void crypto_main();
extern void valuta_main();
extern void preciousmetals_main();

//-----------------------------------------
int main(){
    int choice;
   while (1) 
   {
    display_menu();
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            crypto_main();
            break;
        case 2:
            valuta_main();
            break;
        case 3:
            preciousmetals_main();
            break;
        case 4:
            printf("Afslutter programmet");
            return 0;
        default:
            printf("Ukendt svar, benyt venligst 1, 2, 3 eller 4\n");
    }
   }
   return 0;
}