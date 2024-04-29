// Osnovi  Programiranja , Parcijala 2 Vjezba2/Zadatak5 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program koji provjerava da li je broj palindrom\n");
    printf("Unesite broj:\n");
    int broj, brojunazad=0;
    scanf("%d", &broj);

    int brojZaVadjenje = broj;
    while(brojZaVadjenje>0){
        brojunazad = brojunazad * 10 + (brojZaVadjenje%10);
        brojZaVadjenje/=10;

    }
    if(broj == brojunazad){
        printf("Broj %d je palindrom", broj);
    }
    else{
        printf("Broj %d nije palindrom", broj);
    }
    return 0;
}
