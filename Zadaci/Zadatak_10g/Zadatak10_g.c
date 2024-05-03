// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10g Mirsad Masic
#include<stdio.h>

int main(){
  int n, i, j;
  printf("Unesite broj redova: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
  	for(j = 0; j < n - i - 1; j++)
      printf(" ");
  	for(j = 0; j < n; j++){
  	  printf(" *");	
	}
	putchar('\n');
  }
}
