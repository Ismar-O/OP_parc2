// Osnovi Programiranja, Parcijala 2 Vjezba2/Zadatak2 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lozinka = 1234;
    printf("Program za lozinku\n");
    int unesenaLozinka;
    do{
        printf("Unesite lozinku;\n");
        scanf("%d", &unesenaLozinka);

    }while(unesenaLozinka!=lozinka);
    printf("Lozinka tacna!");
    return 0;
}


