// Osnovi Programiranja, Parcijala 2 Vjezba2/Zadatak2 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program za tablicu mnozenja od 1 do n\n");
    printf("Upisite n\n");
    int n;
    scanf("%d", &n);

    for(int k = 1; k<=10; k++){
        for(int i = 1; i<=n; i++){

            printf(" %d x%3.d = %3.d,", i, k , i*k);

        }
        printf("\b \b\n");// \b escape sequence pomjera kursor lijevo i ispisuje prazno mjesto preko  zadnjeg zareza u redu
    }

    return 0;
}
