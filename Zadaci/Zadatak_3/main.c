// Osnovi Programiranja, Parcijala 2 Vjezba2/Zadatak2 Ismar Osmanovic
#include <stdio.h>
#include <stdlib.h>

int unos(int lozinka);
void printBinary(unsigned int value);


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

//Ovo ispod ja pokusavam napravit da radi i sa karakterima

void printBinary(unsigned int value) {
    // Size of an unsigned int in bits
    int size = sizeof(unsigned int) * 8;

    // Loop through each bit starting from the most significant bit
    for (int i = size - 1; i >= 0; i--) {
        // Check if the bit at position i is set (1) or not set (0)
        if ((value >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}


int unos(int lozinka){

unsigned int hexloz = 0;
char karakter;
do{
    karakter=getchar();
    hexloz+=karakter;
    hexloz =  hexloz << 8;
}while(karakter!='\n');
//hexloz=hexloz- 10;
printBinary(hexloz);
printf("%X", hexloz);



}

int foo_za_kodiranje(int lozinka){





}
