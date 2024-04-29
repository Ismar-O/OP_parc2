// Osnovi Programiranja, Parcijala 2 Vjezba2/Zadatak4 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ja sam ovaj zadatak shvatio ovako

int main()
{
    srand(time(NULL));
    printf("Program z pogadjanje broja od 0 do 100\n");
    int randbroj, unos;
    randbroj=rand()%100 + 1;
    do{
        printf("Pokusajte pogoditi broj:\n");
        scanf("%d", &unos);
    }while(unos!=randbroj);
      printf("Pogodili ste broj! \a");
    return 0;
}
