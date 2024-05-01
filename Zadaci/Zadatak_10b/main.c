// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10b Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    puts("Unesite sirinu uzorka:");
    scanf("%d", &input);

    for(int i = 1;i<=input; i++){
        for(int j = input-i; j > 0; j--)printf("  ");
        for(int k = i*2-1; k > 0; k--)printf(" *");
        printf("\n");
    }

    for(int i = input-1; i>0;i--){
        for(int j = 0; j < input-i; j++)printf("  ");
        for(int k = 0; k < i*2-1; k++)printf(" *");
        printf("\n");

    }
    return 0;
}
