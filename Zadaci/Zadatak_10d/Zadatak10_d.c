// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak10d Mirsad Masic
#include<stdio.h>

void printPattern(int);
int calculate(int, int);

int main(){
  int n;
  printf("Unesite broj redova: ");
  scanf("%d", &n);
  printPattern(n);
  return 0;
}

void printPattern(int n){
  int i, j;
  for(i = 0; i < n; i++){
  	for(j = 0; j < n - i - 1; j++)
  	  printf("  ");
  	for(j = 0; j < i + 1; j++){
  	  printf(" %2d ", calculate(i, j));	
	}
	putchar('\n');
  }
}

int calculate(int i, int j){
  if(j == 0 || j == i)
  	return 1;
  else
    return calculate(i - 1, j) + calculate(i - 1, j - 1);
}
