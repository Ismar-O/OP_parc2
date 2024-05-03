// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10e Mirsad Masic
#include<stdio.h>

int main(){
  int n, i, j;
  printf("Unesite broj redova: ");
  scanf("%d", &n);
  for(i = 0; i <= n; i++){
    for(j = 0; j < n - i; j++)
      printf(" ");
    printf(" *");
    if(i != 0){
      for(j = 0; j < (i - 1) * 2; j++)
        printf(" ");
      printf(" *");
	}
	putchar('\n');
  }
  for(i = n - 1; i >= 0; i--){
    for(j = 0; j < n - i; j++)
      printf(" ");
    printf(" *");
    if(i != 0){
      for(j = 0; j < (i - 1) * 2; j++)
        printf(" ");
      printf(" *");
	}
	putchar('\n');
  }
}
