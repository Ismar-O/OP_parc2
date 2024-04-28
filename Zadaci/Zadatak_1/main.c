// Osnovi Programiranja, Parcijala 2 Vjezba2/Zadatak1 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program koji ucitava 10 brojeva i racuna zbir i sredju vrijednost\n");
    printf("Unesite 10 brojeva:\n");
    int broj;
    long int zbir;
    float srednja;
    const int brojbrojeva = 10;
    for(int i = 0; i<brojbrojeva; i++){
        scanf("%d", &broj);
        zbir+=broj;
    }
    srednja = (float)zbir / brojbrojeva;
    printf("Zbir brojeva je %d, a njihova srednja vrijednost %.2f", zbir, srednja);
    return 0;
}
