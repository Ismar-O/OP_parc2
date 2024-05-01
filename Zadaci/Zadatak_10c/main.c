// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10c Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    puts("Unesite sirinu uzorka:");
    scanf("%d", &input);

    for(int i = 1; i<=input; i++){
        for(int j = input-i; j > 0; j--) printf("  ");
        for(int k = i*2-1; k > 0; k--) printf(" *");
        printf("\n");
    }
    return 0;
}
