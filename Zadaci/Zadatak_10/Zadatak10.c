// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10 Mirsad Masic
#include<stdio.h>

int main(){
  int input, i, j;
  puts("Unesite sirinu uzorka(neparan broj):");
  scanf("%d", &input);
  if(input % 2 == 0){
  	puts("Unijeli ste paran broj");
  	return 1;
  }
  
  for(i = 0; i < input / 2 + 1; i++){
  	//printanje praznog prostora
  	for(j = 0; j < i; j++)
  	  printf(" ");
  	//printanje gornjeg dijela uzorka
  	for(j = 0; j < input - 2 * i; j++)
  	  printf("*");
	printf("\n");
  }
  
  for(i = input / 2 - 1; i >= 0; i--){
  	//printanje praznog prostora
  	for(j = 0; j < i; j++)
  	  printf(" ");
  	//printanje donjeg dijela uzorka
  	for(j = 0; j < input - 2 * i; j++)
  	  printf("*");
  	printf("\n");
  }
  return 0;
}
