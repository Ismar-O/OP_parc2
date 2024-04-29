// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak8 Mirsad Masic
#include<stdio.h>

int main(){
  int input, biggest = 0;
  do{
  	puts("Unesite broj");
  	scanf("%d", &input);
  	if(input > biggest)
  	  biggest = input;
  } while(input > 0);
  if(biggest > 0)
    printf("Najveci uneseni broj je %d\n", biggest);
  else
    printf("Nije unesen nijedan broj veci od 0!");
  return 0;
}
