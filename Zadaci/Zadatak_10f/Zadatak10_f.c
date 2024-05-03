// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10f Mirsad Masic
#include<stdio.h>

int main(){
  int i, j, n;
  printf("Unesite broj redova: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
  	for(j = 0; j < i + 1; j++){
  	  printf("%c ", 'A' + i);
	}
	putchar('\n');
  }
  return 0;
}
