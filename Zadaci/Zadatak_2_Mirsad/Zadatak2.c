// Osnovi Programiranja , Parcijala 2 Vjezba2 / Zadatak2 Mirsad Masic
#include<stdio.h>

int main(){
  int i, j, n;
  puts("Unesite broj do kog ce se izvrsavati mnozenje:");
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
  	for(j = 1; j <= 8; j++){
  	  printf("%dx%d = %d", i, j, i*j);	
  	  //za sprjecavanje ispisa zareza na kraju
  	  if(j != 8)
  	    printf(", ");
	}
	putchar('\n');
  }
  return 0;
}
