// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak9 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dana, start;
    printf("Program za kalendar\n");
    printf("Unesite broj dana u mjesecu:");
    scanf("%d", &dana);
    printf("Mjesec pocinje sa (1=Pon, 7 = Ned):");
    scanf("%d", &start);

    for(int i = 1; i<start+dana; i++){
        if(i<start) printf("    ");
        else printf(" %2d ", i-start+1);
        if(i%7==0){ printf("\n");
            }
    }
    return 0;
}
